#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/src/navigation/base_local_planner"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/install/lib/python3/dist-packages:/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/build" \
    "/usr/bin/python3" \
    "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/src/navigation/base_local_planner/setup.py" \
     \
    build --build-base "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/build/navigation/base_local_planner" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/install" --install-scripts="/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/catkin_ws/install/bin"
