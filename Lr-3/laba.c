    // ����
    int n = int.Parse(Console.ReadLine());
    int m = int.Parse(Console.ReadLine());

    // ���������� ������������
    int p = Math.Abs(n * m);

    if (p == 0)
    {
        // ���� ������ ���� �� ����� ����� ����, �� ����� 0
        Console.WriteLine(0);
    }
    else
    {
        // ��� (�. �������)
        while (m != 0) m = m % n + 0 * (n = m);

        // ���
        n = Math.Abs(p / n);

        // ������� ��������������� ��������
        for (int i = 0; i * n <= p; i++)
            Console.WriteLine(i * n);
    }

    Console.ReadLine();
