using System;
using System.Linq;
using System.Collections.Generic;
var ns = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
Console.WriteLine($"{ns[0] + ns[1]}");