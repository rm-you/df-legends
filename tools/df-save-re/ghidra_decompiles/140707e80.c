// FUN_140707e80 @ 140707e80
// callees:
//   -> 140dfb5c4 operator_new


undefined8 * FUN_140707e80(undefined2 param_1)

{
  undefined8 *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_motherst::vftable;
    return puVar1;
  case 1:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_fatherst::vftable;
    return puVar1;
  case 2:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_spousest::vftable;
    return puVar1;
  case 3:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_childst::vftable;
    return puVar1;
  case 4:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_deityst::vftable;
    return puVar1;
  case 5:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_loverst::vftable;
    return puVar1;
  case 6:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_prisonerst::vftable;
    return puVar1;
  case 7:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_imprisonerst::vftable;
    return puVar1;
  case 8:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_masterst::vftable;
    return puVar1;
  case 9:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_apprenticest::vftable;
    return puVar1;
  case 10:
    puVar1 = operator_new(0x18);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_companionst::vftable;
    return puVar1;
  case 0xb:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_former_masterst::vftable;
    return puVar1;
  case 0xc:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_former_apprenticest::vftable;
    return puVar1;
  case 0xd:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_pet_ownerst::vftable;
    return puVar1;
  case 0xe:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_former_spousest::vftable;
    return puVar1;
  case 0xf:
    puVar1 = operator_new(0x10);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 100;
    *puVar1 = histfig_hf_link_deceased_spousest::vftable;
    return puVar1;
  default:
    return (undefined8 *)0x0;
  }
}

