// FUN_140c745d0 @ 140c745d0
// callees:
//   -> 140c800d0 FUN_140c800d0
//   -> 140c5b050 FUN_140c5b050


void FUN_140c745d0(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_140c800d0();
  *(undefined2 *)(param_1 + 0xa8) = param_2;
  *(undefined2 *)(param_1 + 0xaa) = param_3;
  *(undefined2 *)(param_1 + 0xac) = param_4;
  if ((*(uint *)(param_1 + 0x114) & 0x4000) != 0) {
    *(undefined2 *)(param_1 + 0x7f0) = param_2;
    *(undefined2 *)(param_1 + 0x7f2) = param_3;
    *(undefined2 *)(param_1 + 0x7f4) = param_4;
    *(undefined2 *)(param_1 + 0x7ea) = param_2;
    *(undefined2 *)(param_1 + 0x7ec) = param_3;
    *(undefined2 *)(param_1 + 0x7ee) = param_4;
  }
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x800000;
  *(undefined2 *)(param_1 + 0xb8) = 0xffff;
  *(undefined2 *)(param_1 + 0xae) = param_2;
  *(undefined2 *)(param_1 + 0xb0) = param_3;
  *(undefined2 *)(param_1 + 0xb2) = param_4;
  *(undefined4 *)(param_1 + 0xb4) = 3;
  FUN_140c5b050(param_1);
  return;
}

