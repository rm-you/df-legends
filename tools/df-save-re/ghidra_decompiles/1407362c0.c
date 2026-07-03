// FUN_1407362c0 @ 1407362c0
// callees:


void FUN_1407362c0(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0xffffffff;
  iVar7 = -1;
  iVar3 = -1;
  if (*(int *)(param_2 + 0x20) != -1) {
    uVar6 = 0x10;
    iVar3 = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x38) == -1) {
    if (*(int *)(param_2 + 0x28) != -1) {
      uVar6 = 0x11;
      iVar3 = *(int *)(param_2 + 0x28);
    }
  }
  else {
    uVar6 = 0x1c;
    iVar3 = *(int *)(param_2 + 0x28);
    iVar7 = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x18) != -1) {
    uVar6 = 0x12;
    iVar3 = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x2c) != -1) {
    uVar6 = 0x17;
    iVar3 = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != -1) {
    uVar6 = 0x18;
    iVar3 = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != -1) {
    uVar6 = 0x1d;
    iVar3 = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x68) != -1) {
    uVar6 = 0x1e;
    iVar3 = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x1c) != -1) {
    uVar6 = 0xb;
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  if ((iVar3 != -1) && (iVar4 = 0, param_1[1] - *param_1 >> 3 != 0)) {
    lVar5 = 0;
    do {
      switch(uVar6) {
      case 0xb:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0xc0))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
        break;
      default:
        goto switchD_1407363c8_caseD_c;
      case 0x10:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0x88))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
        break;
      case 0x11:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0x90))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
        break;
      case 0x12:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0xa0))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
        break;
      case 0x17:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0xa8))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
        break;
      case 0x18:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0xb0))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
        break;
      case 0x1c:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0x98))
                          (*(longlong **)(lVar5 + *param_1),iVar3,iVar7);
        break;
      case 0x1d:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 0xb8))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
        break;
      case 0x1e:
        cVar2 = (**(code **)(**(longlong **)(lVar5 + *param_1) + 200))
                          (*(longlong **)(lVar5 + *param_1),iVar3);
      }
      if ((cVar2 != '\0') && (0 < *(int *)(*(longlong *)(lVar5 + *param_1) + 0x18))) {
        pbVar1 = *(byte **)(*(longlong *)(lVar5 + *param_1) + 0x10);
        *pbVar1 = *pbVar1 & 0xfe;
      }
switchD_1407363c8_caseD_c:
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)(longlong)iVar4 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}

