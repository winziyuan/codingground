class Entity
{
    
   
   public:
    static int objectCount;
      double length;         // 长度
      double breadth;        // 宽度
      double height;         // 高度
protected:
      double width;
      // 成员函数声明
    //   double getVolume(void);
    // //   void testfunc(void);
    //   void setLength( double len );
    //   void setBreadth( double bre );
    //   void setHeight( double hei );
      
// 成员函数定义
public:
friend double printWidth( Entity en ){
    
    return en.length;
};

Entity(void){
    
}
Entity(double length){
    objectCount++;
    this->length=length;
}
Entity(double length,double hei):height(hei){
    this->length=length;
}
~Entity(void){
  // cout << "======>析构函数"<<endl;
};

// Entity(void);
// Entity(double length);
// Entity(double length,double hei);
// ~Entity(void);


double getVolume(void)  
{
    return length * breadth * height;
}
double getLength(void)  
{
    return length;
}
double getHeight(void)  
{
    return height;
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


// double printWidth( Entity en ){
    
//     return en.length;
// };

// void Entity::Entity(void){
    
// }
// void Entity::Entity(double length){
//     this->length=length;
// }
// void Entity::Entity(double length,double hei):height(hei){
//     this->length=length;
// }
// void Entity::~Entity(void){
// };
//Entity::
