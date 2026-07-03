// FUN_140072260 @ 140072260
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140072260(longlong param_1)

{
  void *_Memory;
  longlong *_Memory_00;
  longlong lVar1;
  
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    break;
  case 1:
  case 2:
  case 4:
  case 5:
  case 10:
    break;
  case 3:
  case 0xe:
    break;
  case 6:
  case 8:
  case 9:
  case 0xd:
  case 0xf:
    break;
  case 7:
    _Memory = *(void **)(param_1 + 0x10);
    if (_Memory != (void *)0x0) {
      lVar1 = *(longlong *)((longlong)_Memory + 0x10);
      if (lVar1 != 0) {
        FUN_140002020(lVar1,*(longlong *)((longlong)_Memory + 0x20) - lVar1 >> 2,4);
        *(undefined8 *)((longlong)_Memory + 0x10) = 0;
        *(undefined8 *)((longlong)_Memory + 0x18) = 0;
        *(undefined8 *)((longlong)_Memory + 0x20) = 0;
      }
      free(_Memory);
    }
    goto LAB_140072350;
  case 0xb:
    _Memory_00 = *(longlong **)(param_1 + 0x10);
    if (_Memory_00 != (longlong *)0x0) {
      lVar1 = *_Memory_00;
      if (lVar1 != 0) {
        FUN_140002020(lVar1,_Memory_00[2] - lVar1 >> 2,4);
        *_Memory_00 = 0;
        _Memory_00[1] = 0;
        _Memory_00[2] = 0;
      }
      free(_Memory_00);
    }
    goto LAB_140072350;
  case 0xc:
    break;
  default:
    goto switchD_140072291_default;
  }
  free(*(void **)(param_1 + 0x10));
LAB_140072350:
  *(undefined8 *)(param_1 + 0x10) = 0;
switchD_140072291_default:
  return;
}

