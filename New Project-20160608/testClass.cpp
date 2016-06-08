class Entity
{
   public:
      double length;         // 长度
      double breadth;        // 宽度
      double height;         // 高度

      // 成员函数声明
    //   double getVolume(void);
    // //   void testfunc(void);
    //   void setLength( double len );
    //   void setBreadth( double bre );
    //   void setHeight( double hei );
      
// 成员函数定义
double getVolume(void)  
{
    return length * breadth * height;
}

void setLength( double len )
{
    length = len;
}

void setBreadth( double bre )
{
    breadth = bre;
}

void setHeight( double hei )
{
    height = hei;
}
};

//Entity::
