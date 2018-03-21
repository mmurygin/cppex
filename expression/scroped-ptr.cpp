#include "scoped-ptr.h"

ScopedPtr::ScopedPtr(Expression *ptr)
    : ptr_(ptr) { }

ScopedPtr::~ScopedPtr() {
    delete ptr_;
    ptr_ = 0;
}

Expression * ScopedPtr::get () const {
    return ptr_;
}

Expression * ScopedPtr::release () {
    Expression * to_return = ptr_;

    ptr_ = 0;

    return to_return;
}

void ScopedPtr::reset(Expression *ptr) {
    delete ptr_;
    ptr_ = ptr;
}

Expression & ScopedPtr::operator * () const {
    return *ptr_;
}

Expression * ScopedPtr::operator->() const {
    return ptr_;
}
