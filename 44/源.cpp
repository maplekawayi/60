//string
//类型的输入操作符对空白字符的处理：读取并忽略有效字符（非空白字
//符）之前所有的空白字符，然后读取字符直至再次遇到空白字符，读取终止（该
//空白字符仍留在输入流中）
//getline
//函数对空白字符的处理：不忽略行开头的空白字符，读取字符直至遇到
//换行符，读取终止并丢弃换行符（换行符从输入流中去掉但并不存储在string
//对象中）