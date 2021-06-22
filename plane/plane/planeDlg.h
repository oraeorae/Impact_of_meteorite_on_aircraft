
// planeDlg.h: 头文件
//



#pragma once

#define MAX 30					//石头出现的最大数量



// CplaneDlg 对话框
class CplaneDlg : public CDialogEx
{
// 构造
public:
	CplaneDlg(CWnd* pParent = nullptr);	// 标准构造函数

	//添加的数据
	CImage background;
	CImage m_plane;
	CImage m_stone[MAX];
	CRect m_planepos;
	CRect m_stonepos[MAX];

	int max_stonenum = MAX;			//最大的石头数量（最多出现10个）
	int is_stone[MAX] = {0};		//石头是否存在
	int down_speed = 10;			//石头下落的速度
	int new_speed = 500;			//石头产生的速度
	int plane_speed = 10;			//飞机移动速度

	//移动标志，允许飞机不断移动（即按住键可继续移动）
	bool moving_right = false;
	bool moving_left = false;
	bool moving_up = false;
	bool moving_down = false;

	int score = 0;				//分数

	//解决图片闪烁
	CRect m_client;			 //保存客户区大小
	CDC m_cacheDC;			 //缓冲DC
	CBitmap m_cacheCBitmap;  //缓冲位图


// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PLANE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnStnClickedStatic3();
};
