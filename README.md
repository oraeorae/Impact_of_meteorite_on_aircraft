# Impact_of_meteorite_on_aircraft
【MFC，C++】陨石撞飞机

思路：
首先是图片的贴图，先实现将资源图片贴到对话框（利用CImage）；接着是响应按键操作，则是利用PreTranslateMessage来接受键盘消息，以此来实现方向键操控飞机；然后是陨石的不断下落，则是使用定时器（SetTimer）来实现陨石每隔一段时间的下落；实现基本操作后就进行相关的完善来避免界面的闪烁和增加游戏的可玩性。

(2021.6..17)——版本4.0
```
/* 版本:陨石撞飞机4.0
 * 时间：2021.6.17
 * 作者：orall
 * 完善了：1.增加声音（爆炸声音和开始声音）
 *	 	  2.界面闪烁
 *        3.改变游戏的高度和宽度，增强游戏的可玩性
 *        4.增加难度
 *		  5.得分机制和胜利机制  
 *		  6.完善界面（开始的界面）
 *	本版本完善
 * 	      7.飞机和陨石碰撞判定的准确度
 *        8.重新开局飞机会炸
 *        8.飞机可以移动到边界
 * 待完善：1.得分标签的闪烁
 *		  2.重新开始界面没有出现“按空格键开始”	 
 */
```

（2021.6.16）——版本3.0
```
/* 版本:陨石撞飞机3.0
 * 时间：2021.6.16
 * 作者：orall
 * 完善了：1.增加声音（爆炸声音和开始声音）
 *	 	  2.界面闪烁
 *        3.改变游戏的高度和宽度，增强游戏的可玩性
 *        4.增加难度
 *		  5.得分机制和胜利机制  
 *		  6.完善界面（开始的界面）
 * 待完善：1.得分标签的闪烁
 *		  2.飞机和陨石碰撞判定的准确度
 *        3.重新开局飞机会炸
 *		  4.飞机可以移动到边界
 */
 ```
 
 （2021.6.15） ——版本2.0.1
```
/* 版本:陨石撞飞机2.0.1
 * 时间：2021.6.15
 * 作者：orall
 * 完善了：1.增加声音（爆炸声音和开始声音）
 *	 	  2.界面闪烁
 *        3.改变游戏的高度和宽度，增强游戏的可玩性
 * 待完善：1.增加难度
 *        2.完善界面（开始的界面）
 *		  3.得分机制和胜利机制  
 */
```
 
 (2021.6.15)——版本2.0
```
/* 版本:陨石撞飞机2.0
 * 时间：2021.6.15
 * 作者：orall
 * 完善了：1.增加声音（爆炸声音和开始声音）
 *	 	  2.界面闪烁
 * 待完善：1.增加难度
 *        2.完善界面（开始的界面）
 *		  3.得分机制和胜利机制
 *		  4.游戏的可玩性
 */
```

（2021.6.15）——版本1.0
```
/* 版本:陨石撞飞机1.0
 * 时间：2021.6.15
 * 作者：orall
 * 版本特点：实现了基本功能
 * 待完善：1.增加难度
 *		  2.增加声音（爆炸声音和开始声音）
 *        3.完善界面（开始的界面）
 *		  4.得分机制和胜利机制
 *		  5.界面闪烁
 */

(2021.6.14-15)——雏形
 
