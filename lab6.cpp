    //********************************************************************
    // This program determines the fee for a cat or dog pet tag.
    // It uses nested if/else statements.
    // Kyla Powell.
    // CSE 100.
    // January 30th, 2025.
    //********************************************************************
 #include <iostream>
 #include <string>
 using namespace std;
 #include <cctype>

int main()
{
string pet; // "cat" or "dog"
char spayed; // 'y' or 'n'

//Get pet type and spaying information
if (pet == "cat" || pet == "dog")
{
cout << "is the pet spayed or neutered (y/n)? ";
cin >> spayed;
if (spayed == 'y' || spayed == 'Y') 
cout << "Fee is $4.00 \n";
else
cout << "Fee is $8.00 \n";
}
else
cout << "Only cats and dogs need pet tags. \n";


// Determine the pet tag fee
if (pet == "cat") 
{ if (spayed == 'y' || spayed == 'Y')
cout << "Fee is $4.00 \n";
else
cout << "Fee is $8.00 \n";
}
else if (pet == "dog")
{ if (spayed == 'y' || spayed == 'Y')
cout << "Fee is $6.00 \n";
else
cout << "Fee is $12.00 \n";
}
else
cout << "Only cats and dogs need pet tags. \n";

return 0;
}
//output:
//enter pet type: cat
//is the pet spayed or neutered (y/n)? y
//Fee is $4.00
//enter pet type: cat
//is the pet spayed or neutered (y/n)? n
//Fee is $8.00
//enter pet type: cat
//is the pet spayed or neutered (y/n)? Y
//Fee is $4.00
//enter pet type: dog
//is the pet spayed or neutered (y/n)? y
//Fee is $6.00
//enter pet type: dog
//is the pet spayed or neutered (y/n)? n
//Fee is $12.00
//enter pet type: dog
//is the pet spayed or neutered (y/n)? Y
//Fee is $6.00
//enter pet type: hamster
//Only cats and dogs need pet tags.