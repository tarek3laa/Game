#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

char Shape[30][30]=
{

    {'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','f','s','s','s','q','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','w'},
    {'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'}
};


//bool GameOver;
int width = 30;
int height =30;
int x,y,fruitx,fruity,score=0;


void Draw()
{
    system("cls");
    for(int y=0; y<height; y++)
    {
        for(int x=0; x<width; x++)
        {
            if(Shape[y][x]=='q')
                cout<<"@";
            else if(Shape[y][x]=='s')
                cout<<" ";
            else if (Shape[y][x]=='w')
                cout<<"#";
            else if(Shape[y][x]=='f')
                cout<<"$";


        }
        cout<<endl;

    }



    cout<<"score : "<<score;

}

void Move()
{
    bool   b=false;
    if(GetAsyncKeyState(VK_UP))
        for(int y=0; y<height; y++)
        {
            for(int x=0; x<width; x++)
            {
                if(Shape[y][x]=='q'&&Shape[y-1][x]=='s'&&y!=0)
                {
                    swap(Shape[y][x],Shape[y-1][x]);
                    b=true;
                    break;
                }
                if(Shape[y][x]=='q'&&Shape[y-1][x]=='f'&&y!=0)
                {
                    Shape[y-1][x]='s';
                    score= score +10;
                    do
                    {
                        fruitx = rand() %width-2;
                        fruity = rand() % height-2;
                    }
                    while(Shape[fruity][fruitx]!='s')
                        Shape[fruity][fruitx]='f';

                }
            }
            if(b)
                break;
        }
    else  if(GetAsyncKeyState(VK_DOWN))
        for(int y=0; y<height; y++)
        {
            for(int x=0; x<width ; x++)
            {
                if(Shape[y][x]=='q'&&Shape[y+1][x]=='s'&&y!=height-1)
                {
                    swap(Shape[y][x],Shape[y+1][x]);
                    b=true;
                    break;
                }
                if(Shape[y][x]=='q'&&Shape[y+1][x]=='f'&&y!=height-1)
                {

                    Shape[y+1][x]='s';
                    score= score +10;
                    do
                    {
                        fruitx = rand() %width-2;
                        fruity = rand() % height-2;
                    }
                    while(Shape[fruity][fruitx]!='s')
                        Shape[fruity][fruitx]='f';

                }
            }
            if(b)
                break;
        }
    else  if(GetAsyncKeyState(VK_RIGHT))

    {
        for(int y=0; y<height; y++)
        {
            for(int x=0; x<width; x++)
            {
                if(Shape[y][x]=='q'&&Shape[y][x+1]=='s'&&x!=width-1)
                {
                    swap(Shape[y][x],Shape[y][x+1]);
                    b=true;
                    break;
                }
                if(Shape[y][x]=='q'&&Shape[y][x+1]=='f'&&x!=width-1)
                {
                    Shape[y][x+1]='s';
                    score= score +10;
                    do
                    {
                        fruitx = rand() %width-2;
                        fruity = rand() % height-2;
                    }
                    while(Shape[fruity][fruitx]!='s')
                        Shape[fruity][fruitx]='f';

                }
            }
            if(b)
                break;
        }


    }
    else  if(GetAsyncKeyState(VK_LEFT))
    {
        for(int y=0; y<height; y++)
        {
            for(int x=0; x<width; x++)
            {
                if(Shape[y][x]=='q'&&Shape[y][x-1]=='s'&&x!=0)
                {
                    swap(Shape[y][x],Shape[y][x-1]);
                    b=true;
                    break;
                }
                if(Shape[y][x]=='q'&&Shape[y][x-1]=='f'&&x!=0)
                {
                    Shape[y][x-1]='s';
                    score= score +10;
                    do
                    {
                        fruitx = rand() %width-2;
                        fruity = rand() % height-2;
                    }
                    while(Shape[fruity][fruitx]!='s')
                        Shape[fruity][fruitx]='f';

                }


            }
            if(b)
                break;
        }
    }

}




int main()
{
    while(true)
    {
        Draw();
        Move();
    }
    return 0;
}
