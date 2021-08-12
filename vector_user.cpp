#include<iostream>
#include<vector>

class user
{
public:
	int x, y, z;

};
int main()
{
	user u;
	std::vector<user> v; //creating vector of user defone type
	v.push_back(u);
	v.push_back({ 10,20,30 });

	std::cout << v[0].x << std::endl;
	std::cout << v[0].y << std::endl;
	std::cout << v[0].z << std::endl;
	std::cout << v[1].x << std::endl;
	std::cout << v[1].y << std::endl;
	std::cout << v[1].z << std::endl;

	std::vector<std::vector<int>> v1(3, std::vector<int>(3));  //creating vector of vector

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		      std::cin >> v1[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << v1[i][j]<<"\t";
		}
		std::cout << std::endl;
	}

}
