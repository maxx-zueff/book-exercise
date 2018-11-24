// Три функции

#include <iostream>
void first(void);
void second(void);

int main(void)
{
    first(); first();
    second(); second();

    return 0;
}

void first(void)
{
    using namespace std;
    cout << "Three blind mice" << endl;
}

void second(void)
{
    using namespace std;
    cout << "See how they run" << endl;
}