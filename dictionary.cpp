#include <iostream>

 using namespace std;

 
struct node 
{
  
string word, meaning;
  
node * lchild;
  
node * rchild;

};

 
node * insert (node * temp, string val, string val_meaning) 
{
  
    // binary search tree!!!
    if (temp == NULL)
    
    {
      
node * temp = new node;
      
temp->word = val;
      
temp->meaning = val_meaning;
      
temp->lchild = NULL;
      
temp->rchild = NULL;
      
return temp;
    
}
  
 
if (val < temp->word)
    
    {
      
temp->lchild = insert (temp->lchild, val, val_meaning);
    
}
  
 
  else if (val > temp->word)
    
    {
      
temp->rchild = insert (temp->rchild, val, val_meaning);
    
}
  
 
return temp;

}


 
void
predefinedDictionary (node * root) 
{
  
    // for the predefined dictionary words!!!
    root = insert (root, "winter", "cold season");
  
    //insert(root,"","");
    insert (root, "summer", "hot season");
  
insert (root, "autumn", "inbetween season");
  
insert (root, "spring", "inbetween season");
  
insert (root, "winter", "cold season");
  
insert (root, "apple", "food item used to keep doctors away");
  
insert (root, "ball", "object used to play with");
  
insert (root, "car",
	   "instrument used to travel from one place to another quickly");
  
insert (root, "dog", "man's best friend");
  
insert (root, "elephant", "animal with a long trunk for it's nose");
  
insert (root, "fruit", "a nutritious food item");
  
insert (root, "green", "a type of colour");
  
insert (root, "home", "place where a person lives");
  
insert (root, "ice", "solidified or frozen water");
  
insert (root, "jackal", "a wild animal that eats nonveg");
  
insert (root, "kite",
	   "instrument used by benjamin franklin to discover electrcity or an object that flys in the sky");
  
insert (root, "lamp", "source of light");
  
insert (root, "moon", "earth's natural sattelite or object in space");
  
insert (root, "night", "time period after the sun sets");
  
insert (root, "onion", "vegetable that makes you cry");
  
insert (root, "pool", "type of sport played with balls and sticks");
  
insert (root, "quilt", "a cloth used to provide warmth in winters");
  
insert (root, "rose", "a beautiful red flower");
  
insert (root, "snake", "friends that stab you in the back");
  
insert (root, "train",
	   /*choo choo*/ "type of vehical that goes faster than a car");
  
insert (root, "ugly",
	   /*yo*/ "appearance of a person, can be seen as 'rude'");
  
insert (root, "violet", "a type of color");
  
insert (root, "wall",
	   "object made out of bricks that provides shelter from external factors like cold and rain");
  
insert (root, "xylophone", "musical instrument");
  
insert (root, "yellow", "a type of color");
  
insert (root, "zebra", "an animal with white and red striped fur");
  
insert (root, "turtle", /*i like turtles*/ "animal that lives in the sea");
  
insert (root, "fox", "animal that has an orangish fur");
  
    /// add more after this!!!
} 
 
void

inorder (node * root) 
{
  
    // to get the BST in a sorted manner!!!
    if (root != NULL)
    
    {
      
inorder (root->lchild);
      
cout << root->word << ": " << root->meaning << endl;
      
inorder (root->rchild);
    
}

}


 
void
addWord (node * root) 
{
  
    // if user wants to add a word!!! 
    cout << "Please add a word and it's meaning!" << endl;
  
 
  {
    
cin >> root->word;
    
cin.ignore ();
    
getline (cin, root->meaning);
    
insert (root, root->word, root->meaning);
  
} 
cout << endl;

} 
 
void

search (node * root, string val) 
{
    if (/*root == NULL ||*/ root->word == val)
        {
          
    cout << root->word << ": " << root->meaning << endl;
          
    return;
        
    }
  
 
    if (root->word < val)
        
        {
          
    return search (root->rchild, val);
          
    cout << root->word << ": " << root->meaning << endl;
        
    }
  
 
           if ( root->word > val)
            
            {
              
        return search (root->lchild, val);
              
        cout << root->word << ": " << root->meaning << endl;
            
        }

  if (root == NULL)
 {
     cout<<"not present !";
     return;
 }
}


 
int
main () 
{
  
string choice, searchAWord;
  
cout << "WELCOME THIS IS AN ONLINE DICTIONARY!" << endl;
  
cout << "HERE YOU CAN SEARCH FOR ANY WORD!" << endl;
  
cout <<
    "IT ALSO PROVIDES THE PREVILEGE TO ADD, DELETE ANY WORD AND ITS MEANING!"
    << endl;
  
node * root = new node;
  
predefinedDictionary (root);
  
cout << "Would you like to see the full dictionary ?" << endl;
  
cin >> choice;
  
if (choice == "YES" || choice == "yes")
    
    {
      
cout << "DICTIONARY is in a sorted way: " << endl;
      
inorder (root);
    
}
  
 
cout << "Would you like to add a word? Type Yes or NO." << endl;
  
cin >> choice;
  
 
if (choice == "YES" || choice == "yes")
    
    {
      
addWord (root);
    
}
  
 
 
cout << "Would you like to search a word?" << endl;
  
cin >> choice;
  
 
if (choice == "YES" || choice == "yes")
    
    {
      
cout << "Enter the word you would like to search!" << endl;
      
cin >> searchAWord;
      
search (root, searchAWord);
    
}
else {
    cout<<"thank you!";
}

}