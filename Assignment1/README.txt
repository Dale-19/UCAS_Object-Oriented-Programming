1. 书山有路勤为径…
以“图书馆借书、还书”为场景，为下面的每个实体设计一个类，并定义相关的属性和方法。
1）大学里的学生; 2）书籍; 3）大学图书馆的管理员

学生：Student
属性：
	姓名（stu_name）
	学号（stu_ID）
	最大可借书数量（max_num）
	目前已借书数量（current_num）
	已借书目（current_book）
	欠款（fine）
方法：
	借书（borrow_book）：输入Book类数组，返回bool类型是否成功
	还书（return_book）：输入Book类数组，返回bool类型是否成功
	检查（check_book）：返回Book类数组，已经借了哪些书，具体信息
	交罚款（pay_fine）：返回bool型是否成功

书籍：Book
属性：
	书名（book_name）
	作者（author）
	出版商（publisher）
	出版日期（publish_date）
	刊号（ISSN）
	页数（page_num）	
	语言（language）
	状态（book_status）（可借阅、仅供浏览、已借出）
	所在位置（book_position）（馆内位置/已借出）
	借出日期（borrow_date）
	归还日期（due_date）
	欠款（fine_amount）
方法：
	入库（in_store）：返回bool类型是否成功
	出库（out_store）：返回bool类型是否成功

图书管理员：Librarian
属性：
	姓名（lib_name）
	联系方式（contact）
	状态（lib_status）（在服务台、在库房、休息中）
方法：
	图书入库（book_in）：输入Book类数组，返回bool类型是否成功
	图书出库（book_out）：输入Book类数组，返回bool类型是否成功
	修改图书信息（book_modify）：输入Book类数组，返回bool类型是否成功
	修改学生信息（stu_modify）：输入Student类，返回bool类型是否成功

2. 驾照在手好多年…
分别从“厂家、车主、交通管理机构”3个角度，设计3个“汽车”的类，并定义相关的属性和方法。
厂家：Factory_Car
属性：
	品牌（car_brand）
	车型（car_type）
	序列号（serial_num）
	发动机号（engine_num）
	生产日期（manu_date）
	推荐售价（advisory_price）
	保修期限（warranty_expire）
方法：
	生产（car_assemble）
	测试（car_test）
	发行销售（car_release）
	召回（car_recall）
	销毁（car_destory）

车主：Owner_Car
（这里更多的是从车本身的信息出发的，没有考虑使用过程中的数据）
属性：
	品牌（car_brand）
	车型（car_type）
	车牌号（car_number）
	车险日期（insure_date）
	年检日期（examine_date）
	购买日期（buy_date）
	售价（buy_price）
	保修期（warranty_expire）
	里程数（car_mileage）
方法：
	买车险（buy_insurance）
	保养检修（car_maintain）：返回string型结果
	年检（annual_examine）：返回string型结果

交通管理机构：Govern_Car
属性：
	车型（car_type）
	车牌号（car_number）
	序列号（serial_num）
	发动机号（engine_num）
	年检日期（examine_date）
	发现时速度（seen_speed）
	发现所在地（seen_addr）
	车主信息（owner_info）
	违章信息（illegal_info）
方法：
	检查速度（speed_check）：返回int型车速
	开罚单（write_ticket）：输入string型罚单信息
