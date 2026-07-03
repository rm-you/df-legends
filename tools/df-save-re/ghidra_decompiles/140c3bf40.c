// FUN_140c3bf40 @ 140c3bf40
// callees:


int FUN_140c3bf40(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  lVar2 = *(longlong *)(param_1 + 0xa78);
  iVar7 = 0;
  iVar9 = 0;
  if (lVar2 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    if (*(longlong *)(lVar2 + 0x220) - *(longlong *)(lVar2 + 0x218) >> 3 != 0) {
      puVar8 = *(undefined8 **)(lVar2 + 0x218);
      lVar4 = *(longlong *)(lVar2 + 0x220) - (longlong)puVar8;
      do {
        puVar3 = (ushort *)*puVar8;
        uVar1 = *puVar3;
        if (uVar1 == 0x2d) {
          iVar7 = *(int *)(puVar3 + 2);
        }
        if (uVar1 == 0x2e) {
          iVar9 = *(int *)(puVar3 + 2);
        }
        if ((((uVar1 < 0x36) && ((0x3c1ec000000000U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) ||
            ((ushort)(uVar1 - 0x65) < 4)) && (iVar5 < *(int *)(puVar3 + 2))) {
          iVar5 = *(int *)(puVar3 + 2);
        }
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 1;
      } while ((ulonglong)(longlong)iVar6 < (ulonglong)(lVar4 >> 3));
    }
    iVar7 = (iVar5 + iVar9 + iVar7) * 5;
  }
  iVar7 = *(int *)(param_1 + 0x5e4) / 100 + iVar7 +
          *(int *)(param_1 + 0x600) / 100 +
          *(int *)(param_1 + 0x61c) / 100 + *(int *)(param_1 + 0x638) / 100;
  if (lVar2 == 0) {
    return iVar7;
  }
  return *(int *)(lVar2 + 0x1c4) / 100 + iVar7;
}

