<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Item Name="내 컴퓨터" Type="My Computer">
		<Property Name="NI.SortType" Type="Int">3</Property>
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">내 컴퓨터/VI 서버</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">내 컴퓨터/VI 서버</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="subVI" Type="Folder">
			<Item Name="airport경로.vi" Type="VI" URL="../subVI/airport경로.vi"/>
			<Item Name="datamsg(Reset).vi" Type="VI" URL="../subVI/datamsg(Reset).vi"/>
			<Item Name="datamsg.vi" Type="VI" URL="../subVI/datamsg.vi"/>
			<Item Name="departure.vi" Type="VI" URL="../subVI/departure.vi"/>
			<Item Name="Destination.vi" Type="VI" URL="../subVI/Destination.vi"/>
			<Item Name="ip.vi" Type="VI" URL="../subVI/ip.vi"/>
			<Item Name="msg(Reset).vi" Type="VI" URL="../subVI/msg(Reset).vi"/>
			<Item Name="msg.vi" Type="VI" URL="../subVI/msg.vi"/>
			<Item Name="new현재날자(SubVI).vi" Type="VI" URL="../subVI/new현재날자(SubVI).vi"/>
			<Item Name="new현재시간(SubVI).vi" Type="VI" URL="../subVI/new현재시간(SubVI).vi"/>
			<Item Name="pilot&amp;controller.vi" Type="VI" URL="../subVI/pilot&amp;controller.vi"/>
			<Item Name="version.vi" Type="VI" URL="../subVI/version.vi"/>
			<Item Name="글로벌 3.vi" Type="VI" URL="../subVI/글로벌 3.vi"/>
			<Item Name="글로벌 4.vi" Type="VI" URL="../subVI/글로벌 4.vi"/>
			<Item Name="글로벌플라이트플랜.vi" Type="VI" URL="../subVI/글로벌플라이트플랜.vi"/>
			<Item Name="날시.vi" Type="VI" URL="../subVI/날시.vi"/>
			<Item Name="날자의 true&amp;false 판별(SubVI).vi" Type="VI" URL="../subVI/날자의 true&amp;false 판별(SubVI).vi"/>
			<Item Name="데이터업데이트.vi" Type="VI" URL="../subVI/데이터업데이트.vi"/>
			<Item Name="버전업데이트.vi" Type="VI" URL="../subVI/버전업데이트.vi"/>
			<Item Name="시간save(SubVI).vi" Type="VI" URL="../subVI/시간save(SubVI).vi"/>
			<Item Name="웨더.vi" Type="VI" URL="../subVI/웨더.vi"/>
			<Item Name="저장된시간을 numver로(SubVI).vi" Type="VI" URL="../subVI/저장된시간을 numver로(SubVI).vi"/>
		</Item>
		<Item Name="SUM" Type="Folder"/>
		<Item Name="data" Type="Folder">
			<Item Name="airport_data" Type="Document" URL="../data/airport_data"/>
			<Item Name="ATC app output.txt" Type="Document" URL="../data/ATC app output.txt"/>
			<Item Name="data" Type="Document" URL="../data/data"/>
			<Item Name="datamsg" Type="Document" URL="../data/datamsg"/>
			<Item Name="fs20049-offlinedata.pbfs" Type="Document" URL="../data/fs20049-offlinedata.pbfs"/>
			<Item Name="fsm-offlinedata.pbfs" Type="Document" URL="../data/fsm-offlinedata.pbfs"/>
			<Item Name="fsx-offlinedatapbfs.pbfs" Type="Document" URL="../data/fsx-offlinedatapbfs.pbfs"/>
			<Item Name="location.pbfs" Type="Document" URL="../data/location.pbfs"/>
			<Item Name="msg" Type="Document" URL="../data/msg"/>
			<Item Name="name.ini" Type="Document" URL="../data/name.ini"/>
			<Item Name="pmdg-offlinedata.pbfs" Type="Document" URL="../data/pmdg-offlinedata.pbfs"/>
			<Item Name="RWY" Type="Document" URL="../data/RWY"/>
			<Item Name="temp" Type="Document" URL="../data/temp"/>
			<Item Name="xfmc-offlinedata.pbfs" Type="Document" URL="../data/xfmc-offlinedata.pbfs"/>
		</Item>
		<Item Name="airport_data" Type="Document" URL="../airport_data"/>
		<Item Name="atc.bmp" Type="Document" URL="../atc.bmp"/>
		<Item Name="atc.ico" Type="Document" URL="../atc.ico"/>
		<Item Name="updater.vi" Type="VI" URL="../updater.vi"/>
		<Item Name="ATC.rtf" Type="Document" URL="../ATC.rtf"/>
		<Item Name="explanation.rtf" Type="Document" URL="../explanation.rtf"/>
		<Item Name="RWY" Type="Document" URL="../RWY"/>
		<Item Name="temp" Type="Document" URL="../temp"/>
		<Item Name="의존성" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="8.6CompatibleGlobalVar.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/config.llb/8.6CompatibleGlobalVar.vi"/>
				<Item Name="Acquire Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Acquire Semaphore.vi"/>
				<Item Name="AddNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/AddNamedSemaphorePrefix.vi"/>
				<Item Name="Application Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Application Directory.vi"/>
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Check if File or Folder Exists.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/libraryn.llb/Check if File or Folder Exists.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Close Panel.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/victl.llb/Close Panel.vi"/>
				<Item Name="compatCalcOffset.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatCalcOffset.vi"/>
				<Item Name="compatFileDialog.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatFileDialog.vi"/>
				<Item Name="compatReadText.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatReadText.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Create Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Create Semaphore.vi"/>
				<Item Name="Destroy Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Destroy Semaphore.vi"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="ex_CorrectErrorChain.vi" Type="VI" URL="/&lt;vilib&gt;/express/express shared/ex_CorrectErrorChain.vi"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler Core CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler Core CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get Semaphore Status.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Get Semaphore Status.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get System Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/sysdir.llb/Get System Directory.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/GetNamedSemaphorePrefix.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="LabVIEWSMTPClient.lvlib" Type="Library" URL="/&lt;vilib&gt;/smtpClient/LabVIEWSMTPClient.lvlib"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVRectTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVRectTypeDef.ctl"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="NI_FTP.lvlib" Type="Library" URL="/&lt;vilib&gt;/FTP/NI_FTP.lvlib"/>
				<Item Name="NI_LVConfig.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/config.llb/NI_LVConfig.lvlib"/>
				<Item Name="NI_PackedLibraryUtility.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/LVLibp/NI_PackedLibraryUtility.lvlib"/>
				<Item Name="Not A Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Not A Semaphore.vi"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="Obtain Semaphore Reference.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Obtain Semaphore Reference.vi"/>
				<Item Name="Open Panel.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/victl.llb/Open Panel.vi"/>
				<Item Name="Release Semaphore Reference.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Release Semaphore Reference.vi"/>
				<Item Name="Release Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Release Semaphore.vi"/>
				<Item Name="RemoveNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/RemoveNamedSemaphorePrefix.vi"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Semaphore Name &amp; Ref DB Action.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore Name &amp; Ref DB Action.ctl"/>
				<Item Name="Semaphore Name &amp; Ref DB.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore Name &amp; Ref DB.vi"/>
				<Item Name="Semaphore RefNum" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore RefNum"/>
				<Item Name="Semaphore Refnum Core.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore Refnum Core.ctl"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="subDisplayMessage.vi" Type="VI" URL="/&lt;vilib&gt;/express/express output/DisplayMessageBlock.llb/subDisplayMessage.vi"/>
				<Item Name="System Directory Type.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/sysdir.llb/System Directory Type.ctl"/>
				<Item Name="System Exec.vi" Type="VI" URL="/&lt;vilib&gt;/Platform/system.llb/System Exec.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="Validate Semaphore Size.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Validate Semaphore Size.vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
				<Item Name="Space Constant.vi" Type="VI" URL="/&lt;vilib&gt;/dlg_ctls.llb/Space Constant.vi"/>
				<Item Name="Write Spreadsheet String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Spreadsheet String.vi"/>
				<Item Name="Write To Spreadsheet File (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (string).vi"/>
				<Item Name="Write To Spreadsheet File (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (I64).vi"/>
				<Item Name="Write To Spreadsheet File (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (DBL).vi"/>
				<Item Name="Write To Spreadsheet File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File.vi"/>
				<Item Name="Set Cursor (Icon Pict).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Cursor (Icon Pict).vi"/>
				<Item Name="Set Cursor (Cursor ID).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Cursor (Cursor ID).vi"/>
				<Item Name="Set Cursor.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Cursor.vi"/>
				<Item Name="Unset Busy.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Unset Busy.vi"/>
				<Item Name="Set Busy.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Busy.vi"/>
				<Item Name="LabVIEWHTTPClient.lvlib" Type="Library" URL="/&lt;vilib&gt;/httpClient/LabVIEWHTTPClient.lvlib"/>
				<Item Name="Path To Command Line String.vi" Type="VI" URL="/&lt;vilib&gt;/AdvancedString/Path To Command Line String.vi"/>
				<Item Name="PathToUNIXPathString.vi" Type="VI" URL="/&lt;vilib&gt;/Platform/CFURL.llb/PathToUNIXPathString.vi"/>
			</Item>
			<Item Name="route.vi" Type="VI" URL="../SUB/route.vi"/>
			<Item Name="Feed.vi" Type="VI" URL="../SUB/Feed.vi"/>
			<Item Name="popup.vi" Type="VI" URL="../SUB/popup.vi"/>
			<Item Name="feedback.vi" Type="VI" URL="../SUB/feedback.vi"/>
			<Item Name="ATCpilot.vi" Type="VI" URL="../SUB/ATCpilot.vi"/>
			<Item Name="ATCcont.vi" Type="VI" URL="../SUB/ATCcont.vi"/>
			<Item Name="Flight time.vi" Type="VI" URL="../SUB/Flight time.vi"/>
			<Item Name="rpopup.vi" Type="VI" URL="../SUB/rpopup.vi"/>
		</Item>
		<Item Name="빌드 스펙" Type="Build">
			<Item Name="route finder" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{D9AC617B-195A-4003-9DB8-7494ACBFDA55}</Property>
				<Property Name="App_INI_GUID" Type="Str">{F6B365E7-FB03-47F0-93F4-4F2880547B8A}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{4A88B384-1ACE-485D-81E3-00E26BE5525E}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">route finder</Property>
				<Property Name="Bld_buildSpecName" Type="Str">route finder</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_localDestDir" Type="Path">../NI_AB_PROJECTNAME/route finder</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToCommon</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{D1B4F7DE-1EA3-4A13-A943-E0820F96F981}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">English</Property>
				<Property Name="Bld_supportedLanguage[1]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">2</Property>
				<Property Name="Bld_version.build" Type="Int">366</Property>
				<Property Name="Bld_version.major" Type="Int">4</Property>
				<Property Name="Bld_version.minor" Type="Int">2</Property>
				<Property Name="Destination[0].destName" Type="Str">route finder.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../NI_AB_PROJECTNAME/route finder/route finder.exe</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">../NI_AB_PROJECTNAME/route finder/data</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/내 컴퓨터/atc.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{2E94CD92-6A7A-47E2-A86C-7F4A90DDB93F}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/내 컴퓨터/RWY</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/내 컴퓨터/temp</Property>
				<Property Name="Source[3].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[3].itemID" Type="Ref">/내 컴퓨터/airport_data</Property>
				<Property Name="Source[4].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[4].itemID" Type="Ref">/내 컴퓨터/updater.vi</Property>
				<Property Name="Source[4].properties[0].type" Type="Str">Show menu bar</Property>
				<Property Name="Source[4].properties[0].value" Type="Bool">false</Property>
				<Property Name="Source[4].properties[1].type" Type="Str">Show vertical scroll bar</Property>
				<Property Name="Source[4].properties[1].value" Type="Bool">false</Property>
				<Property Name="Source[4].properties[10].type" Type="Str">Remove block diagram</Property>
				<Property Name="Source[4].properties[10].value" Type="Bool">false</Property>
				<Property Name="Source[4].properties[11].type" Type="Str">Window has title bar</Property>
				<Property Name="Source[4].properties[11].value" Type="Bool">true</Property>
				<Property Name="Source[4].properties[2].type" Type="Str">Show horizontal scroll bar</Property>
				<Property Name="Source[4].properties[2].value" Type="Bool">false</Property>
				<Property Name="Source[4].properties[3].type" Type="Str">Show toolbar</Property>
				<Property Name="Source[4].properties[3].value" Type="Bool">false</Property>
				<Property Name="Source[4].properties[4].type" Type="Str">Show Abort button</Property>
				<Property Name="Source[4].properties[4].value" Type="Bool">false</Property>
				<Property Name="Source[4].properties[5].type" Type="Str">Show fp when called</Property>
				<Property Name="Source[4].properties[5].value" Type="Bool">false</Property>
				<Property Name="Source[4].properties[6].type" Type="Str">Allow user to close window</Property>
				<Property Name="Source[4].properties[6].value" Type="Bool">true</Property>
				<Property Name="Source[4].properties[7].type" Type="Str">Window behavior</Property>
				<Property Name="Source[4].properties[7].value" Type="Str">Default</Property>
				<Property Name="Source[4].properties[8].type" Type="Str">Window run-time position</Property>
				<Property Name="Source[4].properties[8].value" Type="Str">Unchanged</Property>
				<Property Name="Source[4].properties[9].type" Type="Str">Remove front panel</Property>
				<Property Name="Source[4].properties[9].value" Type="Bool">false</Property>
				<Property Name="Source[4].propertiesCount" Type="Int">12</Property>
				<Property Name="Source[4].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[4].type" Type="Str">VI</Property>
				<Property Name="Source[5].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[5].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[5].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[5].itemID" Type="Ref">/내 컴퓨터/SUM</Property>
				<Property Name="Source[5].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[5].type" Type="Str">Container</Property>
				<Property Name="Source[6].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[6].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[6].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[6].itemID" Type="Ref">/내 컴퓨터/subVI</Property>
				<Property Name="Source[6].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[6].type" Type="Str">Container</Property>
				<Property Name="Source[7].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[7].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[7].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[7].itemID" Type="Ref">/내 컴퓨터/data</Property>
				<Property Name="Source[7].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[7].type" Type="Str">Container</Property>
				<Property Name="SourceCount" Type="Int">8</Property>
				<Property Name="TgtF_companyName" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_fileDescription" Type="Str">route finder</Property>
				<Property Name="TgtF_internalName" Type="Str">route finder</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Polor Bear Team</Property>
				<Property Name="TgtF_productName" Type="Str">route finder </Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{7FA62CDA-A508-4825-8B77-E6EA5D7D1D23}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">route finder.exe</Property>
			</Item>
			<Item Name="route finder setup" Type="Installer">
				<Property Name="Destination[0].name" Type="Str">route2</Property>
				<Property Name="Destination[0].parent" Type="Str">{3912416A-D2E5-411B-AFEE-B63654D690C0}</Property>
				<Property Name="Destination[0].tag" Type="Str">{A1BFD7A3-E195-49CF-B165-BE0613C0732B}</Property>
				<Property Name="Destination[0].type" Type="Str">userFolder</Property>
				<Property Name="DestinationCount" Type="Int">1</Property>
				<Property Name="INST_buildLocation" Type="Path">../route finder setup</Property>
				<Property Name="INST_buildLocation.type" Type="Str">relativeToCommon</Property>
				<Property Name="INST_buildSpecName" Type="Str">route finder setup</Property>
				<Property Name="INST_defaultDir" Type="Str">{A1BFD7A3-E195-49CF-B165-BE0613C0732B}</Property>
				<Property Name="INST_includeError" Type="Bool">false</Property>
				<Property Name="INST_language" Type="Int">18</Property>
				<Property Name="INST_productName" Type="Str">route finder setup</Property>
				<Property Name="INST_productVersion" Type="Str">4.1.12</Property>
				<Property Name="INST_readmeID" Type="Ref">/내 컴퓨터/explanation.rtf</Property>
				<Property Name="InstSpecBitness" Type="Str">32-bit</Property>
				<Property Name="InstSpecVersion" Type="Str">14008036</Property>
				<Property Name="MSI_arpCompany" Type="Str">polor bear Team</Property>
				<Property Name="MSI_arpContact" Type="Str">polor bear Team</Property>
				<Property Name="MSI_arpPhone" Type="Str">polor bear Team</Property>
				<Property Name="MSI_arpURL" Type="Str">polor bear Team</Property>
				<Property Name="MSI_bannerImageID" Type="Ref">/내 컴퓨터/atc.bmp</Property>
				<Property Name="MSI_distID" Type="Str">{183D444E-27F7-4077-BE19-5811A8638DF1}</Property>
				<Property Name="MSI_licenseID" Type="Ref">/내 컴퓨터/ATC.rtf</Property>
				<Property Name="MSI_osCheck" Type="Int">0</Property>
				<Property Name="MSI_upgradeCode" Type="Str">{73B85738-C4DA-4675-B981-2765BD55472C}</Property>
				<Property Name="MSI_welcomeImageID" Type="Ref">/내 컴퓨터/atc.bmp</Property>
				<Property Name="MSI_windowMessage" Type="Str">route finder 를 설치해 주셔 감사합니다.</Property>
				<Property Name="MSI_windowTitle" Type="Str">route finder </Property>
				<Property Name="RegDest[0].dirName" Type="Str">Software</Property>
				<Property Name="RegDest[0].dirTag" Type="Str">{DDFAFC8B-E728-4AC8-96DE-B920EBB97A86}</Property>
				<Property Name="RegDest[0].parentTag" Type="Str">2</Property>
				<Property Name="RegDestCount" Type="Int">1</Property>
				<Property Name="Source[0].dest" Type="Str">{A1BFD7A3-E195-49CF-B165-BE0613C0732B}</Property>
				<Property Name="Source[0].File[0].dest" Type="Str">{A1BFD7A3-E195-49CF-B165-BE0613C0732B}</Property>
				<Property Name="Source[0].File[0].name" Type="Str">route finder.exe</Property>
				<Property Name="Source[0].File[0].Shortcut[0].destIndex" Type="Int">1</Property>
				<Property Name="Source[0].File[0].Shortcut[0].name" Type="Str">route finder</Property>
				<Property Name="Source[0].File[0].Shortcut[0].subDir" Type="Str"></Property>
				<Property Name="Source[0].File[0].ShortcutCount" Type="Int">1</Property>
				<Property Name="Source[0].File[0].tag" Type="Str">{7FA62CDA-A508-4825-8B77-E6EA5D7D1D23}</Property>
				<Property Name="Source[0].FileCount" Type="Int">1</Property>
				<Property Name="Source[0].name" Type="Str">route finder</Property>
				<Property Name="Source[0].tag" Type="Ref">/내 컴퓨터/빌드 스펙/route finder</Property>
				<Property Name="Source[0].type" Type="Str">EXE</Property>
				<Property Name="SourceCount" Type="Int">1</Property>
			</Item>
			<Item Name="나의 어플리케이션" Type="EXE">
				<Property Name="App_INI_aliasGUID" Type="Str">{23BBCD1C-CFA4-4DCD-AD83-668F0F30D815}</Property>
				<Property Name="App_INI_GUID" Type="Str">{0272A996-B93F-4DFF-BA2D-3A2EA0AB90B9}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{DA8C1EE4-4381-4796-935F-C5F28E550F65}</Property>
				<Property Name="Bld_buildSpecName" Type="Str">나의 어플리케이션</Property>
				<Property Name="Bld_compilerOptLevel" Type="Int">0</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">Korean</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">/C/Users/tkddn/Desktop/aw</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{034B7CAF-9EE3-4F5D-A9AE-33B86EE1DD87}</Property>
				<Property Name="Bld_supportedLanguage[0]" Type="Str">English</Property>
				<Property Name="Bld_supportedLanguage[1]" Type="Str">Korean</Property>
				<Property Name="Bld_supportedLanguageCount" Type="Int">2</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">Application.exe</Property>
				<Property Name="Destination[0].path" Type="Path">/C/Users/tkddn/Desktop/aw/Application.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">&lt;none&gt;</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">지원 디렉토리</Property>
				<Property Name="Destination[1].path" Type="Path">/C/Users/tkddn/Desktop/aw/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">&lt;none&gt;</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Source[0].itemID" Type="Str">{59223ADD-A161-4DBE-9D9C-9C1D718BFA69}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref"></Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_fileDescription" Type="Str">나의 어플리케이션</Property>
				<Property Name="TgtF_internalName" Type="Str">나의 어플리케이션</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">저작권 2017 </Property>
				<Property Name="TgtF_productName" Type="Str">나의 어플리케이션</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{CBD3EF2E-FC4C-439B-A3F6-A76CE60C114E}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">Application.exe</Property>
			</Item>
		</Item>
	</Item>
</Project>
