    // Ввод
    int n = int.Parse(Console.ReadLine());
    int m = int.Parse(Console.ReadLine());

    // Запоминаем произведение
    int p = Math.Abs(n * m);

    if (p == 0)
    {
        // Если хотябы одно из чисел равно нулю, то ответ 0
        Console.WriteLine(0);
    }
    else
    {
        // НОД (а. Евклида)
        while (m != 0) m = m % n + 0 * (n = m);

        // НОК
        n = Math.Abs(p / n);

        // Перебор неотрицательных значений
        for (int i = 0; i * n <= p; i++)
            Console.WriteLine(i * n);
    }

    Console.ReadLine();
