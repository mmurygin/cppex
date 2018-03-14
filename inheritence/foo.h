#pragma once

struct Foo {
    void say() const;

protected:
    explicit Foo(const char *msg);

private:
    const char *msg;
};
