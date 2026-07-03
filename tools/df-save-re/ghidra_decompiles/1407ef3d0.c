// FUN_1407ef3d0 @ 1407ef3d0
// callees:
//   -> 14000bfc0 FUN_14000bfc0


void FUN_1407ef3d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((longlong)param_1 + 6) = *(undefined2 *)((longlong)param_2 + 6);
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = param_2[4];
  FUN_14000bfc0(param_1 + 6,param_2 + 6);
  FUN_14000bfc0(param_1 + 0xc,param_2 + 0xc);
  FUN_14000bfc0(param_1 + 0x12,param_2 + 0x12);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  *(undefined2 *)((longlong)param_1 + 0x9a) = *(undefined2 *)((longlong)param_2 + 0x9a);
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  return;
}

