#include<iostream>
using namespace std;
int main()
{
    int score=0,option;
    cout<<"------WELCOME TO THE GK QUIZ ------\n";
    cout<<"1-What is the capital of India ?\n";
    cout<<"(1)New Delhi[]\n (2)Benguluru[]\n (3)Mumbai[]\n (4)Greater Noida[]\n";
    cin>>option;
    if(option==1)
    {
        cout<<"Correct Answer \n";
        score++;
    }
    else
    cout<<"Wrong Answer\n";
    cout<<"2-What is the national bird of India ?\n";
    cout<<"(1)Eagle[]\n (2)Pigeon[]\n (3)Peacock[]\n (4)Parrot[]\n";
    cin>>option;
    if(option==3)
    {
        cout<<"Correct Answer\n";
        score++;
    }
    else
    cout<<"Wrong Answer\n";
    cout<<"(3)-Which of the following is the longest epic of the world ?\n";
    cout<<"(1)Ramayan[]\n (2)Mahabharat[]\n (3)Upanishad[]\n (4)None of these[]\n";
    cin>>option;
    if(option==2)
    {
        cout<<"Correct Answer \n";
        score++;
    }
    else
    cout<<"Wrong Answer\n";
    cout<<"(4)Which of the following is the character of the ramayan ?\n";
    cout<<"(1)Bheem[]\n (2)Arjun[]\n (3)Bharat[]\n (4)Kunti[]\n";
    cin>>option;
    if(option==3)
    {
        cout<<"Correct Answer \n";
        score++;
    }
    else
    cout<<"Wrong Answer\n";

    cout<<"------THE QUIZ IS OVER------\n";
    cout<<"------NOW ITS TIME FOR THE RESULT------\n";
    cout<<"Your score : "<<score;
    if(score>=3)
    cout<<"------CONGRAUTION FOR YOUR SCORES------\n";
    else
    cout<<"------OOPS! YOU NEED MORE STUDY------";
    return 0;
}