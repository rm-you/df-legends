// FUN_140a5aeb0 @ 140a5aeb0
// callees:
//   -> 1400026e0 FUN_1400026e0
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


/* WARNING: Removing unreachable block (ram,0x000140a5af45) */

longlong FUN_140a5aeb0(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1;
  FUN_1400026e0();
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined4 *)(lVar2 + 0x100) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  puVar1 = operator_new(1);
  *(undefined1 **)(param_1 + 0xf8) = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x100) = 1;
  return param_1;
}

