// FUN_1407acb40 @ 1407acb40
// callees:
//   -> 140dfb5c4 operator_new


void FUN_1407acb40(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar2 = operator_new(0x68);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x50) == 0) {
    puVar2 = operator_new(0x98);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x8c) = 0xffff;
    puVar2[0x12] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 0x50) = puVar2;
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 != -1) {
      lVar3 = DAT_141c53720 - DAT_141c53718 >> 3;
      if (lVar3 != 0) {
        iVar5 = (int)lVar3 + -1;
        if (-1 < iVar5) {
          while( true ) {
            iVar4 = iVar5 + iVar6 >> 1;
            lVar3 = *(longlong *)(DAT_141c53718 + (longlong)iVar4 * 8);
            if (*(int *)(lVar3 + 4) == iVar1) break;
            if (iVar1 < *(int *)(lVar3 + 4)) {
              iVar5 = iVar4 + -1;
            }
            else {
              iVar6 = iVar4 + 1;
            }
            if (iVar5 < iVar6) {
              return;
            }
          }
          if (lVar3 != 0) {
            *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x50) + 0x18) =
                 *(undefined4 *)(lVar3 + 0x1c08);
          }
        }
      }
    }
  }
  return;
}

