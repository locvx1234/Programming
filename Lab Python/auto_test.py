from nose.tools import *
from ex47.game import Room

def test_romm():
    gold = Room ("GoldRoom",
                 """This room has gold in it you can grab. There 's a
                door to the north""")
    assert_equal(gold.name, "GoldRoom")
    assert_equal(gold.paths, {})

def test_room_paths():
    center = Room ("Center", "Test roomin the center.")
    north = Room ("North","Test roomin the north.")
    south = Room ("South","Test roomin the south.")

    center.add_paths({'north':north,'south':south})
    assert_equal(center.go('north'), north)
    assert_equal(center.go('south'), south)

def test_map():
    start = Room ("Start" , "You can go west and a hole")
    west = Room ("Trees", "There are trees here , you can go east")
    down = Room ("Sungeon" , "IT 's a dark down here, you can go up")
    start.add_paths ({ 'west' : west, 'down' : down})
    west.add_paths ({'east' : start})
    down.add_paths ({'up' : start})

    assert_equal (start.go ('west'), west)
    assert_equal (start.go ('west').go('east'),start)
    assert_equal (start.go ('down').go('up'),start)
    
