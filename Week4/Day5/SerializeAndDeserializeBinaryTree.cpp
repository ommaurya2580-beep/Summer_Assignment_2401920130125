class Codec {
public:

    string serialize(TreeNode* root) {

        if(root == NULL)
            return "#,";

        return to_string(root->val) + "," +
               serialize(root->left) +
               serialize(root->right);
    }

    TreeNode* deserializeHelper(string &data, int &pos) {

        if(data[pos] == '#') {
            pos += 2;
            return NULL;
        }

        int sign = 1;

        if(data[pos] == '-') {
            sign = -1;
            pos++;
        }

        int num = 0;

        while(data[pos] != ',') {
            num = num * 10 + (data[pos] - '0');
            pos++;
        }

        pos++;

        TreeNode* root = new TreeNode(sign * num);

        root->left = deserializeHelper(data, pos);
        root->right = deserializeHelper(data, pos);

        return root;
    }

    TreeNode* deserialize(string data) {

        int pos = 0;
        return deserializeHelper(data, pos);
    }
};