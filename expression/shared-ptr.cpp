#include  "shared-ptr.h"

SharedPtr::SharedPtr(Expression *ptr)
    : ptr_(ptr) {
    if (ptr_) {
        counter_ = new unsigned(1);
    } else {
        counter_ = 0;
    }
}

SharedPtr::SharedPtr(const SharedPtr & other)
    : counter_(other.counter_), ptr_(other.ptr_) {
    if (counter_) {
        ++*counter_;
    }
}

SharedPtr::~SharedPtr() {
    if (counter_ && (--*counter_ == 0)) {
        delete ptr_;
        delete counter_;
    }
}

SharedPtr & SharedPtr::operator = (const SharedPtr &other) {
    if (this == &other) {
        return *this;
    }

    if (counter_ && (--*counter_ == 0))
    {
        delete counter_;
        delete ptr_;
    }

    ptr_ = other.ptr_;
    counter_ = other.counter_;

    if (counter_) {
        ++*counter_;
    }

    return *this;
}

Expression *SharedPtr::get() const
{
    return ptr_;
}

void SharedPtr::reset(Expression *ptr)
{
    if (counter_ && (--*counter_ == 0))
    {
        delete ptr_;
        delete counter_;
    }

    ptr_ = ptr;

    if (ptr_) {
        counter_ = new unsigned(1);
    }
}

Expression &SharedPtr::operator*() const
{
    return *ptr_;
}

Expression *SharedPtr::operator->() const
{
    return ptr_;
}
