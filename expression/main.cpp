#include <iostream>
#include "expression.h"
#include "binary-operation.h"
#include "number.h"
#include "print-visitor.h"
#include "scoped-ptr.h"

using namespace std;

int main() {
    Expression *sube = new BinaryOperation(new Number(4.5), '+', new Number(5));
    Expression *expr = new BinaryOperation(new Number(3), '*', sube);

    std::cout << expr->evaluate() << std::endl;

    PrintVisitor p = PrintVisitor();

    expr->visit(&p);

    delete expr;

    cout << endl;

    {
        ScopedPtr ptr(new Number(8));
        Expression * released = ptr.release();
        cout << released->evaluate() << endl;
    }

    return 0;
}
