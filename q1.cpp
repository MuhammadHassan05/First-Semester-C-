////question no 1;
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//
//	//data
//	string name;
//	string roll_no;
//	cout << "enter u r name = " << endl;
//	getline(cin, name);
//	cout << "enter u r roll number = " << endl;
//	getline(cin, roll_no);
//	//quizez
//	float quizes = 0.0;
//	float qiuz1 = 0.0, qiuz2 = 0.0, qiuz3 = 0.0;
//	cout << "enter marks of 1st quiz(out 0f 10) = " << endl;
//	cin >> qiuz1;
//	cout << "enter marks of 2nd quiz(out 0f 10) = " << endl;
//	cin >> qiuz2;
//	cout << "enter marks of 3rd quiz(out 0f 10) = " << endl;
//	cin >> qiuz3;
//	float Q_avg = 0.0;
//	Q_avg = (qiuz1 + qiuz2 + qiuz3) / 3.0;
//	cout << Q_avg;
//	cout << "\n";
//	//assugnment
//	float assign = 0.0;
//	float assign1 = 0.0, assign2 = 0.0, assign3 = 0.0;
//	cout << "enter marks of 1st assignment(out 0f 10) = " << endl;
//	cin >> assign1;
//	cout << "enter marks of 2nd assignment(out 0f 10) = " << endl;
//	cin >> assign2;
//	cout << "enter marks of 3rd assignment(out 0f 10) = " << endl;
//	cin >> assign3;
//	float A_avg = 0.0;
//	A_avg = (assign1 + assign2 + assign3) / 3.0;
//	cout << A_avg;
//	cout << "\n";
//	//mid marks
//	float mid1 = 0.0, mid2 = 0.0, midtotal = 0.0;
//	cout << "enter marks of 1st mid - term(out 0f 15.0) = " << endl;
//	cin >> mid1;
//	cout << "enter marks of 2nd mid - term(out 0f 15.0) = " << endl;
//	cin >> mid2;
//	midtotal = mid1 + mid2;
//	cout << midtotal;
//	cout << "\n";
//	float final = 0.0;
//	cout << "enter marks of final (out of 40) = " << endl;
//	cin >> final;
//	cout << "\n";
//	//project
//	float project = 0.0;
//	cout << "enter marks of project (out of 10) = " << endl;
//	cin >> project;
//	cout << "\n";
//	//total
//	float total = 0.0;
//	total = Q_avg + A_avg + midtotal + final + project;
//	cout << total;
//	cout << "\n";
//	//display result
//	cout << "******STUDENT RESULT******" << endl;
//	cout << "name = " << name << endl;
//	cout << "roll number = " << roll_no << endl;
//	cout << "\n";
//	cout << "***Quizes marks***" << endl;
//	cout << "quiz 1 =" << qiuz1 << endl;
//	cout << "quiz 2 =" << qiuz2 << endl;
//	cout << "quiz 3 =" << qiuz3 << endl;
//	cout << "average of quizes is " << Q_avg << endl;
//	cout << "\n";
//	cout << "***Assignment marks***" << endl;
//	cout << "assignment 1 =" << assign1 << endl;
//	cout << "assignment 2 =" << assign2 << endl;
//	cout << "assignment 3 =" << assign3 << endl;
//	cout << "average of assignment is " << A_avg << endl;
//	cout << "\n";
//	cout << "***Mid-term marks***" << endl;
//	cout << "mid - term 1 = " << mid1 << endl;
//	cout << "mid - term 2 = " << mid2 << endl;
//	cout << "\n";
//	cout << "***final marks***" << endl;
//	cout << "final = " << final << endl;
//	cout << "\n";
//	cout << "***project marks***" << endl;
//	cout << "project = " << project << endl;
//	cout << "\n";
//	cout << "your position = ";
//	if (total >= 90 && total <= 100)
//	{
//		cout << " GRADE A" << endl;
//	}
//	else if (total >= 80 && total <= 89)
//	{
//		cout << " GRADE B" << endl;
//	}
//	else if (total >= 60 && total <= 79)
//	{
//		cout << " GRADE C" << endl;
//	}
//	else if (total >= 50 && total <= 69)
//	{
//		cout << " GRADE C" << endl;
//	}
//	else
//	{
//		cout << " Fail " << endl;
//	}
//	return 0;
//}