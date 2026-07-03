// FUN_140cf1a50 @ 140cf1a50
// callees:
//   -> 1400f1b70 FUN_1400f1b70
//   -> 140dfb5b4 free
//   -> 1400c5df0 FUN_1400c5df0
//   -> 1400049b0 FUN_1400049b0


void FUN_140cf1a50(ushort *param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  
  puVar1 = DAT_141c68058;
  if (*param_1 < 4) {
    while (puVar1 != (undefined8 *)0x0) {
      _Memory = (void *)*puVar1;
      if (((((ushort)(*(short *)((longlong)_Memory + 0x14) - 9U) < 2) &&
           (*(ushort *)((longlong)_Memory + 0x1c) == param_1[2])) &&
          (*(ushort *)((longlong)_Memory + 0x1e) == param_1[3])) &&
         (*(ushort *)((longlong)_Memory + 0x20) == param_1[4])) {
        puVar1 = (undefined8 *)puVar1[2];
        if (_Memory != (void *)0x0) {
          FUN_1400f1b70(_Memory);
          free(_Memory);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar1[2];
      }
    }
    if (DAT_1410b67dc != 1) {
      FUN_1400c5df0(&DAT_141c53470,param_1[2],param_1[3],param_1[4],0x10);
      FUN_1400c5df0(&DAT_141c53470,param_1[2],param_1[3],param_1[4],0x20);
      FUN_1400c5df0(&DAT_141c53470,param_1[2],param_1[3],param_1[4],0x40);
      FUN_1400c5df0(&DAT_141c53470,param_1[2],param_1[3],param_1[4],0x80);
      FUN_1400c5df0(&DAT_141c53470,param_1[2],param_1[3],param_1[4],0x100);
      FUN_1400049b0(&DAT_141c53470,param_1[2],param_1[3],param_1[4],0x3c0000);
    }
  }
  return;
}

