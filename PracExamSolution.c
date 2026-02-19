int fix_bad_code( int first, int second )
{
        int value;
        if ( first == second )
                value =0;
        else if ( first > second )
                value= 1 ;
        else if ( second > first )
                value =-1 ;

        return value;
}
int skip_spaces( char mystring[], int start_index )
{
        int result =-1 ;
        while(mystring[start_index] !='\0')
        {
                if(mystring[start_index] == ' ')
                {
                        start_index++;
                }
                else
                {
                        result = start_index;
                        break;
                }

        }
    return result;
}

int find_next_word( char mystring[], int start_index )
{
        int result =-1;
        if(mystring[start_index] == '\0'){
                result = -1;
        }
        else if(mystring[start_index] == ' ')
        {
                result= skip_spaces(mystring, start_index+1 );
        }
        else
        {
                while(mystring[start_index] !=' ' && mystring[start_index] !='\0'){
                        start_index++;
                }
                if(mystring[start_index+1] !=' ' && mystring[start_index+1] !='\0')
                {
                        result = start_index+1;
                }

        }
    return result;
}

int change_to_upper( char mystring[], int index )
{
        int result =0;
        if(mystring[index] >=97 && mystring[index] <=122)
        {
                mystring[index] = mystring[index]-32;
                result = 1;
        }

    return result ;
}

int capitalize_all_words( char mystring[] )
{
        int index =0;
        int count =0;
        index = skip_spaces( mystring, index ) ;
        while(index >=0)
        {
                count +=change_to_upper(mystring,index);
                index = find_next_word( mystring, index ) ;
        }
    return count;
}

string_t make_string_type(char input_string[])
{
        int index =0;
        string_t line;
        while(input_string[index] != '\0')
        {
                line.myString[index] = input_string[index];
                index++;
        }
        line.length = index;
        return line;


        //Add your code here
}
