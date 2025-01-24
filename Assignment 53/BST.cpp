// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<stdio.h>
struct Node{
  int item;
  Node*left;
  Node*right;
};
class BST{
    private:
        Node* root;    
    protected:
        void recpre(Node*);
        void recpost(Node*);
        void recin(Node*);
        void inordercopy(BST&,Node*);
        Node* find(int);
    public:
        BST();
        BST(int);
        BST(BST&);
        ~BST();
        BST operator=(BST&);
        void clear();
        void insert(int);
        void preorder();
        void postorder();
        void inorder();
        void del(int);
        
        
};
BST BST::operator=(BST &B){
   clear();
   inordercopy(*this,B.root);
  return *this;
}
void BST::clear(){
    while(root){
        del(root->item);
    }
}
void BST::inordercopy(BST &b,Node*ptr){
    if(ptr){
        inordercopy(b,ptr->left);
        b.insert(ptr->item);
        inordercopy(b,ptr->right);
    }
}
BST::BST(BST&B){
    root=NULL;
    if(B.root){
        B.inordercopy(*this,B.root);
    }
    
}
BST::~BST(){
    while(root)
    {
        del(root->item);
    }
}
Node* BST::find(int val){
    Node *ptr=root;
    while(ptr!=NULL){
        if(ptr->item==val)
            break;
        else if(ptr->item<val)
        {
            ptr=ptr->right;
        }
        else{
            ptr=ptr->left;
        }
        
    }
    return ptr;
}
void BST::del(int val){
    try{
        if(root==NULL)
            throw 1;
        Node*parptr=NULL;
        Node*ptr=root;
        while(ptr!=NULL){
            if(ptr->item==val)
                break;
            else if(ptr->item<val){
                parptr=ptr;
                ptr=ptr->right;
            }
            else{
                parptr=ptr;
                ptr=ptr->left;
            }
        }
        if(parptr==NULL&&ptr!=NULL)// deleting root Node 
        
        {
            if(ptr->left==NULL&&ptr->right==NULL){//Node is leaf Node 
                delete ptr;
                root=NULL;
            }
            else if(ptr->left &&ptr->right){
                // 2child wala node hai
             //pending #succesor nikalna pdega.
             Node*suc,*parsuc;
             parsuc=ptr;
             suc=ptr->right;
             while(suc->left!=NULL)
             {
                 parsuc=suc;
                 suc=suc->left;
             }
             ptr->item=suc->item;
             // deleting succesor.
             if(suc==parsuc->left)
             {
                parsuc->left=suc->right;
             }
             else{
                parsuc->right=suc->right;
             }
             delete suc;
            }
            else{
                // 1 child wali Node hai
                if(ptr->left){
                    root=ptr->left;
                    delete ptr;
                }
                else{
                    root=ptr->right;
                    delete ptr;
                }
            }
        }
        else{// node is Not root Node 
            if(ptr->left==NULL&&ptr->right==NULL){
                if(ptr==parptr->left){
                    parptr->left=NULL;
                    delete ptr;
                }
                else{
                   parptr->right=NULL;
                   delete ptr;
                }
                
            }
            else if(ptr->left&&ptr->right){
                Node *suc,*parsuc;
                parsuc=ptr;
                suc=ptr->left;
                while(suc->left!=NULL){
                    parsuc=suc;
                    suc=suc->left;
                }
                ptr->item=suc->item;
                if(suc==parsuc->right){
                    parsuc->right=suc->right;
                }
                else{
                    parsuc->left=suc->right;
                }
                delete suc;
            }
            else{// 1chilldren Node;
                if(ptr==parptr->left){
                    if(ptr->left)// ptr ka left child hai
                    {
                        parptr->left=ptr->left;
                        delete ptr;
                    }
                    else{// ptr ka ryt child hai
                        parptr->left=ptr->right;
                        delete ptr;
                    }
                }
                else{//  parptr ka right child hai
                    if(ptr->left){
                       parptr->right=ptr->left;
                       delete ptr;
                    }
                    else{
                        parptr->right=ptr->right;
                        delete ptr;
                    }
                }
            }
        }
    }
    catch(int e){
        if(e==1)
            cout<<"Tree Is Empty !!"<<endl;
    }
}
void BST::inorder(){
    try{
        if(root==NULL)
            throw 1;
        Node*t=root;
        recin(t);
    }
    catch(int e){
        if(e==1)
            cout<<"TREE is Empty !!"<<endl;
    }
}
void BST::recin(Node*N){
    if(N){
        recin(N->left);
        cout<<N->item<<" ";
        recin(N->right);
        
    }
}
void BST::postorder(){
    try{
        if(root==NULL)
            throw 1;
        Node*t=root;
        recpost(t);
    }
    catch(int e){
        if(e==1)
            cout<<"TREE is Empty !!"<<endl;
    }
}
void BST::recpost(Node*N){
    if(N){
        recpost(N->left);
        recpost(N->right);
        cout<<N->item<<" ";
    }
}
void BST::recpre(Node*N){
    if(N){
        cout<<N->item<<" ";
        recpre(N->left);
        recpre(N->right);
    }
}
void BST::preorder(){
    try{
        if(root==NULL)
            throw 1;
        Node*t=root;
        recpre(t);
        
    }
    catch(int e){
        if(e==1){
            cout<<"TREE is Empty !!"<<endl;
        }
    }
}
BST::BST(){
    root=NULL;
}
BST::BST(int val){
    Node*N=new Node;
    N->item=val;
    N->left=NULL;
    N->right=NULL;
    root=N;
    
}
void BST::insert(int val){
    Node*N=new Node;
    N->item=val;
    N->left=NULL;
    N->right=NULL;
    if(root==NULL){
       root=N; 
    }
    else{
        Node*t=root;
        while(t){
            if(t->item>val){
                if(t->left==NULL){
                    t->left=N;
                    break;
                }
                else{
                    t=t->left;
                }
            }
            else{
                if(t->right==NULL){
                    t->right=N;
                    break;
                }
                else{
                    t=t->right;
                }
            }
        }
    }
}
int main() {
    BST B(50);
    B.insert(30);
    B.insert(70);
    B.insert(10);
    B.insert(60);
    B.insert(90);
    B.insert(20);
    B.insert(80);
    B.insert(15);
    B.insert(25);
    B.insert(75);
    B.insert(85);
    B.del(90);
    B.preorder();
    cout<<endl;
    B.postorder();
    cout<<endl;
    B.inorder();
    cout<<endl;
    BST K;
    K=B;
    K.inorder();
    
    return 0;
}