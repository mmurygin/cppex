#include  "shared-ptr.h"

SharedPtr::SharedPtr(Expression *ptr)
    : ptr_(ptr) {
    if (ptr_ == 0) {
        counter_ = new unsigned(0);
    } else {
        counter_ = new unsigned(1);
    }
}

SharedPtr::SharedPtr(const SharedPtr & other)
    : counter_(other.counter_), ptr_(other.ptr_) {
    if (ptr_ != 0) {
        *counter_ = *counter_ + 1;
    }
}

SharedPtr::~SharedPtr() {
    *counter_ = *counter_ - 1;

    if (*counter_ == 0) {
        delete ptr_;
        delete counter_;
    }
}

SharedPtr & SharedPtr::operator = (const SharedPtr &other) {
    if (this == &other) {
        return *this;
    }

    *counter_ = *counter_ - 1;
    *other.counter_ = *other.counter_ + 1;

    if (*counter_ == 0) {
        delete counter_;
        delete ptr_;
    }

    counter_ = other.counter_;
    ptr_ = other.ptr_;

    return *this;
}

Expression *SharedPtr::get() const
{
    return ptr_;
}

void SharedPtr::reset(Expression *ptr)
{
    *counter_ = *counter_ - 1;

    if (*counter_ == 0) {
        delete ptr_;
    }

    ptr_ = ptr;
}

Expression &SharedPtr::operator*() const
{
    return *ptr_;
}

Expression *SharedPtr::operator->() const
{
    return ptr_;
}
