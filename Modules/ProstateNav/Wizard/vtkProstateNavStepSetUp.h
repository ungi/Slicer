/*==========================================================================

  Portions (c) Copyright 2008 Brigham and Women's Hospital (BWH) All Rights Reserved.

  See Doc/copyright/copyright.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Program:   3D Slicer
  Module:    $HeadURL: $
  Date:      $Date: $
  Version:   $Revision: $

==========================================================================*/

#ifndef __vtkProstateNavStepSetUp_h
#define __vtkProstateNavStepSetUp_h

#include "vtkProstateNavStep.h"
#include "vtkCommand.h"

class vtkKWLoadSaveButtonWithLabel;
class vtkKWFrame;
class vtkKWEntry;
class vtkKWCheckButton;
class vtkKWPushButton;
class vtkKWLabel;
class vtkSlicerNodeSelectorWidget;

class VTK_PROSTATENAV_EXPORT vtkProstateNavStepSetUp :
  public vtkProstateNavStep
{
public:
  static vtkProstateNavStepSetUp *New();
  vtkTypeRevisionMacro(vtkProstateNavStepSetUp,vtkProstateNavStep);
  void PrintSelf(ostream& os, vtkIndent indent);

  virtual void ShowUserInterface();
  virtual void ProcessGUIEvents(vtkObject *caller, unsigned long event, void *callData);  

protected:
  vtkProstateNavStepSetUp();
  ~vtkProstateNavStepSetUp();

  // GUI Widgets
  vtkSlicerNodeSelectorWidget* TargetPlanFiducialSelector;
  vtkSlicerNodeSelectorWidget* TargetCompletedFiducialSelector;

  vtkKWFrame *FiducialFrame;
  vtkKWFrame *RobotFrame;
  vtkKWLabel *RobotLabel1;
  vtkKWLabel *RobotLabel2;
  vtkKWEntry *RobotAddressEntry;
  vtkKWEntry *RobotPortEntry;
  vtkKWPushButton *RobotConnectButton;
  
  vtkKWFrame *ScannerFrame;
  vtkKWLabel *ScannerLabel1;
  vtkKWLabel *ScannerLabel2;
  vtkKWEntry *ScannerAddressEntry;
  vtkKWEntry *ScannerPortEntry;
  vtkKWPushButton *ScannerConnectButton;
  
private:
  vtkProstateNavStepSetUp(const vtkProstateNavStepSetUp&);
  void operator=(const vtkProstateNavStepSetUp&);
};

#endif
