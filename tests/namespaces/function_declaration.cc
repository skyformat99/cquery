namespace hello {
void foo(int a, int b);
}

/*
OUTPUT:
{
  "types": [],
  "functions": [{
      "id": 0,
      "short_name": "foo",
      "qualified_name": "hello::foo",
      "declaration": "tests/namespaces/function_declaration.cc:2:6"
    }],
  "variables": []
}
*/