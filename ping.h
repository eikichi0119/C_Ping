int main()
{
	if (system("ping 10.0.9.40 -t") == 0)
	{
		print("connection lost");
	}
}