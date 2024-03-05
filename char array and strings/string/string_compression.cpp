#include <iostream>
#include <vector>

using namespace std;

void reverse( vector<char>& chars , int start , int end){

    while( start <= end){
        swap(chars[start++] , chars[end--]);
    }
}

void compression(vector<char> chars)
{

    // create vaiable to count the length of the consecutive repating chars(groups)
    int count = 1;

    // we will use two pointer appraoch
    char prev = chars[0];

    int index = 0; // it will be used to create our answer

    for (int i = 1; i < chars.size(); i++)
    {

        // check if chars are same
        if (chars[i] == prev)
        {
            count++;
        }

        else
        {
            // append the chars in ans
            chars[index++] = prev;

            // now check the count
            if (count > 1)
            {

                int start = index; // start variable to keep the index from where we started appending the counting
                // loop until count is not equal to zero
                while (count != 0)
                {
                    chars[index++] = (count % 10) + '0';
                    count /= 10;
                }

                reverse(chars, start, index-1); // we can use inbuilt reverse(chars.begin()+start , chras.begin()+index);
            }

            count = 1;
            prev = chars[i];
        }
    }

    chars[index++] = prev;
    if (count > 1)
    {

        int start = index; // start variable to keep the index from where we started appending the counting
        // loop until count is not equal to zero
        while (count != 0)
        {
            chars[index++] = (count % 10) + '0';
            count /= 10;
        }

        reverse(chars, start, index-1);// we can use inbuilt reverse(chars.begin()+start , chras.begin()+index);
    }

    cout<<"After the compression array of chars are  :\n";
    
    for(int i=0; i<index; i++){
        cout<<chars[i]<<" ";
    }
    cout<<"\n";

    cout<<"Length of new compressed array of chars is :"<<index<<"\n";
}

int main()
{

    vector<char> chars{'a','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','c','d','d','e','e','e','f'};

    compression(chars);

    return 0;
}