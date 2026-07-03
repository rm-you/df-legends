// FUN_140c629d0 @ 140c629d0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1400f1b70 FUN_1400f1b70
//   -> 140dfb5b4 free
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0


void FUN_140c629d0(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar11;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar11 = uVar10;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      iVar4 = (**(code **)(**(longlong **)(uVar11 + *(longlong *)(param_1 + 0x1c0)) + 0x10))();
      if (iVar4 == 0x22) {
        lVar6 = (longlong)(int)uVar10 * 8;
        lVar5 = (**(code **)(**(longlong **)(lVar6 + *(longlong *)(param_1 + 0x1c0)) + 0x30))();
        plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x1c0));
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x78))(plVar2,1);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x1c0) + lVar6);
        pvVar1 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar1,*(longlong *)(param_1 + 0x1c8) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x1c8) = *(longlong *)(param_1 + 0x1c8) + -8;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x180) = 0;
          iVar4 = (int)(*(longlong *)(lVar5 + 0x60) - *(longlong *)(lVar5 + 0x58) >> 3) + -1;
          lVar6 = (longlong)iVar4;
          if (-1 < iVar4) {
            do {
              pvVar1 = *(void **)(*(longlong *)(lVar5 + 0x58) + lVar6 * 8);
              if (((ushort)(*(short *)((longlong)pvVar1 + 0x14) - 0x9dU) < 2) &&
                 (pvVar1 != (void *)0x0)) {
                FUN_1400f1b70(pvVar1);
                free(pvVar1);
              }
              lVar6 = lVar6 + -1;
            } while (-1 < lVar6);
          }
        }
        break;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  if ((*(uint *)(param_1 + 0x110) >> 0x1b & 1) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xa78);
    local_44 = 0xffffffff;
    local_40 = 0;
    local_3c = 100;
    local_20 = 0;
    local_48 = 0x21;
    local_30 = 0;
    uStack_28 = 0;
    if (((lVar6 != 0) && ((*(uint *)(param_1 + 0x110) & 0x502) != 2)) &&
       ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
      cVar3 = FUN_140106f30(param_1);
      FUN_1409165e0(lVar6 + 0x248,&local_48,cVar3 != '\0');
    }
  }
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xf7ffffff;
  uVar9 = *(uint *)(param_1 + 0x1268);
  if (uVar9 < 500) {
    puVar7 = &DAT_141c70ac4 + (longlong)(int)uVar9 * 0xfa;
    puVar8 = (undefined4 *)((longlong)&DAT_141c70ac4 + (longlong)(int)uVar9 * 4);
    lVar6 = 500;
    do {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 500;
      *(undefined4 *)puVar7 = 0xffffffff;
      puVar7 = (undefined8 *)((longlong)puVar7 + 4);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

