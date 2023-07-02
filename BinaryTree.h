#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
//#include <cstdlib>
#include <string>
#include "TreeNodee.h"




class BinaryTree {
public:
    

    BinaryTree();
    bool play_again();

    void build_question(TreeNodee::TreeNodePtr& start, std::string new_a, std::string new_q);
    bool ask_if(TreeNodee::TreeNodePtr start);

     void traversing(TreeNodee::TreeNodePtr& start, TreeNodee::TreeNodePtr& last_accessed);
     void traversingno( TreeNodee::TreeNodePtr& last_accessed);
     void traversingyes( TreeNodee::TreeNodePtr& last_accessed);



    void write_to_file(TreeNodee::TreeNodePtr start, std::ofstream& out_file);


    void read_from_file(TreeNodee::TreeNodePtr& start, std::ifstream& in_file);

    int get_answer();
    /*
    TreeNodePtr create_default_tree()
    {
        TreeNodePtr yes = new TreeNode;
        TreeNodePtr no = new TreeNode;
        TreeNodePtr root = new TreeNode;

        root->text = "is your object a human??";
        root->yes_ans = yes;
        root->no_ans = no;

        no->text = "yourself";
        no->yes_ans = NULL;
        no->no_ans = NULL;

        yes->text = "fish";
        yes->yes_ans = NULL;
        yes->no_ans = NULL;



        return root;

    }*/


};
//dool prototypes (edit by ahmed)
//void write_to_file(TreeNodePtr start, ofstream& out_file);
//void read_from_file(TreeNodePtr& start, ifstream& in_file);
//void choice(TreeNodePtr& start, TreeNodePtr& last_accessed);
//bool ask_if(TreeNodePtr start);
//void build_question(TreeNodePtr& start);
//bool play_again();
//int get_answer();

/*int main()
{
    BinaryTree t;

    TreeNodePtr head;
    TreeNodePtr last_accessed;

    ofstream out_file;
    ifstream in_file;

    int answer = 0;
    bool loop_play = true;
    cout << "Welcome to Guessing Game." << endl;

    cout << "Are you ready? Yes? No?" << endl;
    if (t.get_answer() == 1)
        cout << "Enjoy the Game." << endl;
    else
    {
        cout << "You either entered 'No' or other invalid answers.Bye!See you Again.";
        exit(0);
    }
    string filename = "test";
    in_file.open(filename);
    t.read_from_file(head, in_file);

    in_file.close();

    while (loop_play == true)
    {
        t.traversing(head, last_accessed);

        if (t.ask_if(last_accessed) == true)
        {
            cout << "YAY! I GOT IT RIGHT!!!!" << endl;
        }
        else
        {
            cout << "OH NO! I GOT IT WRONG!!!" << endl;
            t.build_question(last_accessed);
        }

        string filename = "test";

        out_file.open(filename);
        t.write_to_file(head, out_file);
        out_file.close();

        loop_play = t.play_again();
    }

    cout << "Closing. Goodbye!" << endl;


    return 0;
}*/