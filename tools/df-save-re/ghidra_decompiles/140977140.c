// FUN_140977140 @ 140977140
// callees:
//   -> 1400f1b70 FUN_1400f1b70
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:000000e1 memmove


void FUN_140977140(undefined8 param_1,int param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *_Memory;
  longlong lVar4;
  void *_Dst;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  
  puVar3 = DAT_141c68058;
joined_r0x00014097715c:
  do {
    if (puVar3 == (undefined8 *)0x0) {
      lVar7 = (longlong)param_2 * 8;
      _Memory = *(longlong **)(lVar7 + DAT_141c36a88);
      if (_Memory != (longlong *)0x0) {
        lVar4 = *_Memory;
        if (lVar4 != 0) {
          FUN_140002020(lVar4,_Memory[2] - lVar4 >> 3,8);
          *_Memory = 0;
          _Memory[1] = 0;
          _Memory[2] = 0;
        }
        free(_Memory);
      }
      _Dst = (void *)(DAT_141c36a88 + lVar7);
      pvVar1 = (void *)((longlong)_Dst + 8);
      memmove(_Dst,pvVar1,DAT_141c36a90 - (longlong)pvVar1);
      DAT_141c36a90 = DAT_141c36a90 + -8;
      return;
    }
    pvVar1 = (void *)*puVar3;
    if (*(short *)((longlong)pvVar1 + 0x14) == 0x30) {
      iVar6 = 0;
      lVar7 = 0;
      if (*(longlong *)((longlong)pvVar1 + 0xa0) - *(longlong *)((longlong)pvVar1 + 0x98) >> 3 != 0)
      {
        puVar2 = *(undefined8 **)((longlong)pvVar1 + 0x98);
        puVar5 = puVar2;
        do {
          if (*(int *)*puVar5 == 3) {
            lVar7 = *(longlong *)(puVar2[lVar7] + 8);
            goto LAB_1409771c1;
          }
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
          puVar5 = puVar5 + 1;
        } while ((ulonglong)(longlong)iVar6 <
                 (ulonglong)(*(longlong *)((longlong)pvVar1 + 0xa0) - (longlong)puVar2 >> 3));
      }
      lVar7 = 0;
LAB_1409771c1:
      if (lVar7 == *(longlong *)(DAT_141c36a88 + (longlong)param_2 * 8)) {
        puVar3 = (undefined8 *)puVar3[2];
        if (pvVar1 != (void *)0x0) {
          FUN_1400f1b70(pvVar1);
          free(pvVar1);
        }
        goto joined_r0x00014097715c;
      }
    }
    puVar3 = (undefined8 *)puVar3[2];
  } while( true );
}

