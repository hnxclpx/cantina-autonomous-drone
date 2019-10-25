set(vtkIOExodus_LOADED 1)
set(vtkIOExodus_DEPENDS "vtkFiltersGeneral;vtkIOXML;vtkexodusII;vtksys")
set(vtkIOExodus_LIBRARIES "vtkIOExodus")
set(vtkIOExodus_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.2")
set(vtkIOExodus_LIBRARY_DIRS "")
set(vtkIOExodus_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/x86_64-linux-gnu")
set(vtkIOExodus_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOExodusHierarchy.txt")

