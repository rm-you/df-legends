// FUN_1407f2a40 @ 1407f2a40
// callees:
//   -> 140cc94a0 FUN_140cc94a0
//   -> 1407f2a40 FUN_1407f2a40
//   -> 14014ea60 FUN_14014ea60


void FUN_1407f2a40(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  (**(code **)(*param_1 + 0x100))();
  puVar5 = (undefined8 *)param_1[7];
  puVar1 = (undefined8 *)param_1[8];
  do {
    if (puVar1 <= puVar5) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20000000;
      return;
    }
    iVar2 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
    if (iVar2 == 9) {
LAB_1407f2a91:
      lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x20))();
      if (lVar4 != 0) {
        if ((*(byte *)(lVar4 + 0x118) & 0x80) == 0) {
          FUN_140cc94a0(lVar4);
        }
        iVar2 = *(int *)(lVar4 + 0x1370);
        if ((*(byte *)(lVar4 + 0x118) & 0x80) == 0) {
          FUN_140cc94a0(lVar4);
        }
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + *(int *)(lVar4 + 0x136c);
        *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar2;
        iVar2 = *(int *)((longlong)param_1 + 0x74);
        if (iVar2 < 0xf4241) {
          if (iVar2 < 0) {
            iVar2 = -iVar2;
            iVar3 = iVar2 / 1000000;
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] - iVar3;
LAB_1407f2bc1:
            iVar2 = -(iVar2 + iVar3 * -1000000);
            *(int *)((longlong)param_1 + 0x74) = iVar2;
            if (iVar2 < 0) {
              *(int *)((longlong)param_1 + 0x74) = iVar2 + 1000000;
              *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
            }
          }
        }
        else {
          *(int *)(param_1 + 0xe) = (int)param_1[0xe] + iVar2 / 1000000;
          *(int *)((longlong)param_1 + 0x74) = iVar2 % 1000000;
        }
      }
    }
    else if (iVar2 == 10) {
      lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x18))();
      if (lVar4 != 0) {
        if ((*(uint *)(lVar4 + 0x10) & 0x20000000) == 0) {
          FUN_1407f2a40(lVar4);
        }
        iVar2 = *(int *)(lVar4 + 0x74);
        iVar3 = FUN_14014ea60(lVar4);
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + iVar3;
        *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + iVar2;
        iVar2 = *(int *)((longlong)param_1 + 0x74);
        if (iVar2 < 0xf4241) {
          if (iVar2 < 0) {
            iVar2 = -iVar2;
            iVar3 = iVar2 / 1000000;
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] - iVar3;
            goto LAB_1407f2bc1;
          }
        }
        else {
          *(int *)(param_1 + 0xe) = (int)param_1[0xe] + iVar2 / 1000000;
          *(int *)((longlong)param_1 + 0x74) = iVar2 % 1000000;
        }
      }
    }
    else if (iVar2 == 0x39) goto LAB_1407f2a91;
    puVar5 = puVar5 + 1;
  } while( true );
}

