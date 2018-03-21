#pragma once

#include "expression.h"

struct ScopedPtr
{
    explicit ScopedPtr(Expression *ptr = 0);
    ~ScopedPtr();
    Expression* get() const;
    Expression* release();
    void reset(Expression *ptr = 0);
    Expression& operator*() const;
    Expression* operator->() const;

private:
    // запрещаем копирование ScopedPtr
    ScopedPtr(const ScopedPtr &);
    ScopedPtr &operator=(const ScopedPtr &);

    Expression *ptr_;
};
