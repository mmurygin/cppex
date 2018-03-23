#include  "shared-ptr.h"

SharedPtr::SharedPtr(Expression *ptr)
    : ptr_(ptr) {
    counter_ = ptr ? new unsigned(1) : 0;
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

    this->~SharedPtr();

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
    this->~SharedPtr();

    ptr_ = ptr;

    counter_ = ptr ? new unsigned(1) : 0;
}

Expression &SharedPtr::operator*() const
{
    return *ptr_;
}

Expression *SharedPtr::operator->() const
{
    return ptr_;
}
