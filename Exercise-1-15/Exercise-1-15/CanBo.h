#pragma once
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

/*******************************************************************************
 * Class Definition
 ******************************************************************************/

class CanBo
{
private:
    string Name;
    int Age;
    string Gender;
    string Address;
public:
    /*******************************************************************************
     * @brief Default Constructor
     *
     * @param No param
     * @return Not return
     ******************************************************************************/
    CanBo();

    /*******************************************************************************
     * @brief Constructor
     *
     * @param Name
     * @param Age
     * @param Gender
     * @param Address
     * @return Not return
     ******************************************************************************/
    CanBo(string Name, int Age, string Gender, string Address);

    /*******************************************************************************
     * @brief Getter
     *
     * @param No parameters
     * @return String of name
     ******************************************************************************/
    string getName();

    /*******************************************************************************
     * @brief Setter
     *
     * @param Name
     * @return Not return
     ******************************************************************************/
    void setName(string Name);

    /*******************************************************************************
     * @brief Getter
     *
     * @param No parameters
     * @return Ages
     ******************************************************************************/
    int getAge();

    /*******************************************************************************
     * @brief Setter
     *
     * @param Age
     * @return Not return
     ******************************************************************************/
    void setAge(int Age);

    /*******************************************************************************
     * @brief Getter
     *
     * @param No parameters
     * @return String of Gender
     ******************************************************************************/
    string getGender();
    /*******************************************************************************
     * @brief Setter
     *
     * @param Gender
     * @return Not return
     ******************************************************************************/
    void setGender(string Gender);

    /*******************************************************************************
     * @brief Getter
     *
     * @param No parameters
     * @return String of address
     ******************************************************************************/
    string getAddress();

    /*******************************************************************************
     * @brief Setter
     *
     * @param Address
     * @return Not return
     ******************************************************************************/
    void setAddress(string Address);

    /*******************************************************************************
     * @brief Virtual Method that performs data entry.
     *
     * @param No parameters
     * @return Not return
     ******************************************************************************/
    virtual void Input();

    /*******************************************************************************
     * @brief Virtual Method for displaying data.
     *
     * @param No parameters
     * @return Not return
     ******************************************************************************/
    virtual void Print();
};

/*******************************************************************************
 * End of file
 ******************************************************************************/