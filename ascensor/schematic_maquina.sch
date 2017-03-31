<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="clk" />
        <signal name="rst" />
        <signal name="in1" />
        <signal name="in2" />
        <signal name="out1" />
        <signal name="out2" />
        <port polarity="Input" name="clk" />
        <port polarity="Input" name="rst" />
        <port polarity="Input" name="in1" />
        <port polarity="Input" name="in2" />
        <port polarity="Output" name="out1" />
        <port polarity="Output" name="out2" />
        <blockdef name="maquina_programada">
            <timestamp>2017-3-23T23:16:54</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="maquina_programada" name="XLXI_1">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst" name="rst" />
            <blockpin signalname="in1" name="in1" />
            <blockpin signalname="in2" name="in2" />
            <blockpin signalname="out1" name="out1" />
            <blockpin signalname="out2" name="out2" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1168" y="1024" name="XLXI_1" orien="R0">
        </instance>
        <branch name="clk">
            <wire x2="1168" y1="800" y2="800" x1="1136" />
        </branch>
        <iomarker fontsize="28" x="1136" y="800" name="clk" orien="R180" />
        <branch name="rst">
            <wire x2="1168" y1="864" y2="864" x1="1136" />
        </branch>
        <iomarker fontsize="28" x="1136" y="864" name="rst" orien="R180" />
        <branch name="in1">
            <wire x2="1168" y1="928" y2="928" x1="1136" />
        </branch>
        <iomarker fontsize="28" x="1136" y="928" name="in1" orien="R180" />
        <branch name="in2">
            <wire x2="1168" y1="992" y2="992" x1="1136" />
        </branch>
        <iomarker fontsize="28" x="1136" y="992" name="in2" orien="R180" />
        <branch name="out1">
            <wire x2="1584" y1="800" y2="800" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1584" y="800" name="out1" orien="R0" />
        <branch name="out2">
            <wire x2="1584" y1="992" y2="992" x1="1552" />
        </branch>
        <iomarker fontsize="28" x="1584" y="992" name="out2" orien="R0" />
    </sheet>
</drawing>