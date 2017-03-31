
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name ascensor -dir "C:/Users/jairo-mm/OneDrive/Documentos/TallerDeDigitales/ascensor/planAhead_run_1" -part xc6slx16csg324-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "maquina_programada.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {maquina_programada.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top maquina_programada $srcset
add_files [list {maquina_programada.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-2
