# 数据结构 第二次实验
---
二叉树
---
### bas.req
1. 初始化二叉树：函数名称是InitBiTree(T)；初始条件是二叉树T不存在；操作结果是构造空二叉树T。
2. 销毁二叉树：树函数名称是DestroyBiTree(T)；初始条件是二叉树T已存在；操作结果是销毁二叉树T。
3. 创建二叉树：函数名称是CreateBiTree(T,definition)；初始条件是definition 给出二叉树T的定义；操作结果是按definition构造二叉树T。
4. 清空二叉树：函数名称是ClearBiTree (T)；初始条件是二叉树T存在；	操作结果是将二叉树T清空。
5. 判定空二叉树：函数名称是BiTreeEmpty(T)；初始条件是二叉树T存在；操作结果是若T为空二叉树则返回TRUE，否则返回FALSE。
6. 求二叉树深度：函数名称是BiTreeDepth(T)；初始条件是二叉树T存在；操作结果是返回T的深度。
7. 获得根结点：函数名称是Root(T)；初始条件是二叉树T已存在；操作结果是返回T的根。
8. 获得结点：函数名称是Value(T,e)；初始条件是二叉树T已存在，e是T中的某个结点；操作结果是返回e的值。
9. 结点赋值：函数名称是Assign(T,&e,value)；初始条件是二叉树T已存在，e是T中的某个结点；操作结果是结点e赋值为value。
10. 获得双亲结点：函数名称是Parent(T,e) ；初始条件是二叉树T已存在，e是T中的某个结点；操作结果是若e是T的非根结点，则返回它的双亲结点指针，否则返回NULL。
11. 获得左孩子结点：函数名称是LeftChild(T,e)；初始条件是二叉树T存在，e是T中某个节点；操作结果是返回e的左孩子结点指针。若e无左孩子，则返回NULL。
12. 获得右孩子结点：函数名称是RightChild(T,e)；初始条件是二叉树T已存在，e是T中某个结点；操作结果是返回e的右孩子结点指针。若e无右孩子，则返回NULL。
13. 获得左兄弟结点：函数名称是LeftSibling(T,e)；初始条件是二叉树T存在，e是T中某个结点；操作结果是返回e的左兄弟结点指针。若e是T的左孩子或者无左兄弟，则返回NULL。
14. 获得右兄弟结点：函数名称是RightSibling(T,e)；初始条件是二叉树T已存在，e是T中某个结点；操作结果是返回e的右兄弟结点指针。若e是T的右孩子或者无有兄弟，则返回NULL。
15. 插入子树：函数名称是InsertChild(T,p,LR,c)；初始条件是二叉树T存在，p指向T中的某个结点，LR为0或1，,非空二叉树c与T不相交且右子树为空；操作结果是根据LR为0或者1，插入c为T中p所指结点的左或右子树，p	所指结点的原有左子树或右子树则为c的右子树。
16. 删除子树：函数名称是DeleteChild(T.p.LR)；初始条件是二叉树T存在，p指向T中的某个结点，LR为0或1。	操作结果是根据LR为0或者1，删除c为T中p所指结点的左或右子树。
17. Visit())；初始条件是二叉树T存在，Visit是对结点操作的应用函数；操作结果：先序遍历t，对每个结点调用函数Visit一次且一次，一旦调用失败，则操作失败。
18. 中序遍历：函数名称是InOrderTraverse(T,Visit))；初始条件是二叉树T存在，Visit是对结点操作的应用函数；操作结果是中序遍历t，对每个结点调用函数Visit一次且一次，一旦调用失败，则操作失败。
19. 后序遍历：函数名称是PostOrderTraverse(T,Visit))；初始条件是二叉树T存在，Visit是对结点操作的应用函数；操作结果是后序遍历t，对每个结点调用函数Visit一次且一次，一旦调用失败，则操作失败。
20. 按层遍历：函数名称是LevelOrderTraverse(T,Visit))；初始条件是二叉树T存在，Visit是对结点操作的应用函数；操作结果是层序遍历t，对每个结点调用函数Visit一次且一次，一旦调用失败，则操作失败。
---
### data organization
- 吸取上次的教训....
- 三叉!!!!!链式存储构建(存储搭建麻烦,但是函数相对容易)
-  WTM....
- 存储形式参考[CSDN](https://blog.csdn.net/gavin_john/article/details/72628965)
- ![存储安排](https://s1.ax1x.com/2018/12/17/F0W7Mq.png)
- 文件层面,一个文件储存一个表,强制命名为no.txt
- 文件组织格式:depth->nodes->
---
### 流程组织
1. 探测文件(第一次用fp探测各文件,如果没有则创建,再探测非空),如没有则显示信息并创建.//注意上回的问题 探测非空完毕后fclose再重新fp
2. 如有,显示信息并选择
3. 进入某表
4. 是空表,则初始化录入,否则询问载入or Restart
5. 进入操作
6. 退出时:写表
- 注意探测点适当回传信息
---
- 唉......
- ref: https://blog.csdn.net/gavin_john/article/details/72628965
- ref: https://blog.csdn.net/google19890102/article/details/53926704
- ref: https://zh.wikipedia.org/wiki/%E4%BA%8C%E5%8F%89%E6%A0%91
- 12/17
---