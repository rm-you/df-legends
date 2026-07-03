// FUN_140c3de80 @ 140c3de80
// callees:


undefined8 FUN_140c3de80(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  switch(*(undefined2 *)(param_1 + 0xa0)) {
  case 0x4c:
  case 0x4e:
  case 0x50:
  case 0x52:
  case 0x54:
  case 0x56:
  case 0x58:
  case 0x5a:
  case 0x5c:
  case 0x5e:
    return 2;
  default:
    lVar4 = *(longlong *)(param_1 + 0xa78);
    iVar3 = 0;
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x220) - *(longlong *)(lVar4 + 0x218) >> 3 != 0)) {
      puVar6 = *(undefined8 **)(lVar4 + 0x218);
      lVar4 = *(longlong *)(lVar4 + 0x220) - (longlong)puVar6;
      iVar5 = iVar3;
      do {
        puVar2 = (ushort *)*puVar6;
        uVar1 = *puVar2;
        if ((((uVar1 < 0x36) && ((0x3c1ec000000000U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) ||
            ((ushort)(uVar1 - 0x65) < 4)) && (iVar3 < *(int *)(puVar2 + 2))) {
          iVar3 = *(int *)(puVar2 + 2);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while ((ulonglong)(longlong)iVar5 < (ulonglong)(lVar4 >> 3));
      if (0xe < iVar3) {
        return 3;
      }
      if (10 < iVar3) {
        return 2;
      }
      if (0 < iVar3) {
        return 1;
      }
    }
    break;
  case 0x61:
  }
  return 0;
}

