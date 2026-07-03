// FUN_14014b6b0 @ 14014b6b0
// callees:


void FUN_14014b6b0(undefined8 *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (param_1[2] == 0) {
    return;
  }
  lVar6 = 0;
  do {
    bVar3 = false;
    if (0 < iVar5) {
      uVar2 = param_1[3];
      puVar4 = param_1;
      if (0xf < uVar2) {
        puVar4 = (undefined8 *)*param_1;
      }
      if (*(char *)(lVar6 + -1 + (longlong)puVar4) == ' ') {
LAB_14014b70e:
        bVar3 = true;
      }
      else {
        puVar4 = param_1;
        if (0xf < uVar2) {
          puVar4 = (undefined8 *)*param_1;
        }
        bVar3 = false;
        if (*(char *)(lVar6 + -1 + (longlong)puVar4) == '\"') goto LAB_14014b70e;
      }
      puVar4 = param_1;
      if (0xf < uVar2) {
        puVar4 = (undefined8 *)*param_1;
      }
      if ((*(char *)(lVar6 + -1 + (longlong)puVar4) == '\'') && (1 < iVar5)) {
        puVar4 = param_1;
        if (0xf < uVar2) {
          puVar4 = (undefined8 *)*param_1;
        }
        if (*(char *)(lVar6 + -2 + (longlong)puVar4) != ' ') {
          puVar4 = param_1;
          if (0xf < uVar2) {
            puVar4 = (undefined8 *)*param_1;
          }
          if (*(char *)(lVar6 + -2 + (longlong)puVar4) != ',') goto LAB_14014b75f;
        }
        bVar3 = true;
      }
    }
LAB_14014b75f:
    if ((iVar5 == 0) || (bVar3)) {
      uVar2 = param_1[3];
      puVar4 = param_1;
      if (0xf < uVar2) {
        puVar4 = (undefined8 *)*param_1;
      }
      if ('`' < *(char *)((longlong)puVar4 + lVar6)) {
        puVar4 = param_1;
        if (0xf < uVar2) {
          puVar4 = (undefined8 *)*param_1;
        }
        if (*(char *)((longlong)puVar4 + lVar6) < '{') {
          puVar4 = param_1;
          if (0xf < uVar2) {
            puVar4 = (undefined8 *)*param_1;
          }
          pcVar1 = (char *)((longlong)iVar5 + (longlong)puVar4);
          *pcVar1 = *pcVar1 + -0x61;
          if (0xf < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          pcVar1 = (char *)((longlong)iVar5 + (longlong)param_1);
          *pcVar1 = *pcVar1 + 'A';
          return;
        }
      }
      puVar4 = param_1;
      if (0xf < uVar2) {
        puVar4 = (undefined8 *)*param_1;
      }
      switch(*(undefined1 *)((longlong)puVar4 + lVar6)) {
      case 0x81:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0x9a;
        return;
      case 0x82:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0x90;
        return;
      case 0x84:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0x8e;
        return;
      case 0x86:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0x8f;
        return;
      case 0x87:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0x80;
        return;
      case 0x91:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0x92;
        return;
      case 0x94:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0x99;
        return;
      case 0xa4:
        if (0xf < uVar2) {
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((longlong)iVar5 + (longlong)param_1) = 0xa5;
        return;
      }
      puVar4 = param_1;
      if (0xf < uVar2) {
        puVar4 = (undefined8 *)*param_1;
      }
      if (*(char *)((longlong)puVar4 + lVar6) != ' ') {
        puVar4 = param_1;
        if (0xf < uVar2) {
          puVar4 = (undefined8 *)*param_1;
        }
        if (*(char *)((longlong)puVar4 + lVar6) != '\"') {
          return;
        }
      }
    }
    iVar5 = iVar5 + 1;
    lVar6 = lVar6 + 1;
    if ((ulonglong)param_1[2] <= (ulonglong)(longlong)iVar5) {
      return;
    }
  } while( true );
}

