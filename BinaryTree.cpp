#include"TreeNodee.h"
#include "BinaryTree.h"

//using namespace System::IO;


BinaryTree::BinaryTree() {


}

bool BinaryTree::play_again() {

    return true;


}

void BinaryTree::build_question(TreeNodee::TreeNodePtr& start, std::string new_a, std::string new_q) {

    // cout << "WHAT'S YOUR Object?" << endl;

     //getline(cin, new_a);


     //cout << "OK. Help my by adding a question! Type a question for which yes is a " << new_a << " and no for a " << start->text << "." << endl;
     //getline(cin, new_q);
     //cout << new_q;

    TreeNodee::TreeNodePtr yes_ans = new TreeNodee;
    yes_ans->text = new_a;
    yes_ans->yes_ans = 0;
    yes_ans->no_ans = 0;

    TreeNodee::TreeNodePtr no_ans = new TreeNodee;
    no_ans->text = start->text;
    no_ans->yes_ans = 0;
    no_ans->no_ans = 0;

    start->text = new_q;
    start->yes_ans = yes_ans;
    start->no_ans = no_ans;

    

}

bool BinaryTree::ask_if(TreeNodee::TreeNodePtr start) {


    return true;



}

 void  BinaryTree::traversing(TreeNodee::TreeNodePtr& start, TreeNodee::TreeNodePtr& last_accessed) {

    int user_choice;
    last_accessed = start;
    if (start->yes_ans == 0 && start->no_ans == 0)
        return;
}
void BinaryTree::traversingno( TreeNodee::TreeNodePtr& last_accessed) {
    int i ;
    if (last_accessed->yes_ans == NULL && last_accessed->no_ans == NULL) {
        return;
    }
   else
   {
        last_accessed = last_accessed->no_ans;
    }
}

void BinaryTree::traversingyes(TreeNodee::TreeNodePtr& last_accessed) {
    int i;
    if (last_accessed->yes_ans == NULL && last_accessed->no_ans == NULL) {
        i = 2;
        return;
    }
    else
    {
        last_accessed = last_accessed->yes_ans;
    }
}

void  BinaryTree::write_to_file(TreeNodee::TreeNodePtr start, std::ofstream& out_file)
{
    if (start == NULL)
        out_file << "*" << std::endl;
    else
    {

        out_file << start->text << std::endl;
        write_to_file(start->yes_ans, out_file);
        write_to_file(start->no_ans, out_file);
    }
    return;
}


void BinaryTree::read_from_file(TreeNodee::TreeNodePtr& start, std::ifstream& in_file)
{
    std::string input;

    getline(in_file, input);


    if (input != "*")
    {
        start = new TreeNodee;
         start->text = input;
        read_from_file(start->yes_ans, in_file);
        read_from_file(start->no_ans, in_file);
    }
    else
    {
        start = NULL;
    }
}


int BinaryTree::get_answer() {

    return 0;


}